/*
Copyright or © or Copr. PST PADIVAR Hardware (2020)
contributors:
QuentinC <quclement@et.esiea.fr>
Nulan <novais@et.esiea.fr>
Mathilde <mroyer@et.esiea.fr>
Poloz <polozfr@laposte.net>
MathysG <gageot@et.esiea.fr>

This software is a computer program whose purpose is to diagnose a vehicle.

This software is governed by the CeCILL license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/

#include "server_socket.h"
#include <string>
#include <unistd.h>
#include <iostream>

/*!
 * \file server_socket.cpp
 * \brief sockets for accepting connexion from clients
 */

extern bool g_verbose; /*!< declared in main.cpp, true if verbose mode is activated */

ClientSocket::ClientSocket(int socket_fd, sockaddr_in client_address, socklen_t client_address_size)
    :socket_fd_(socket_fd),client_address_(client_address),client_address_size_(client_address_size)
{
}

ClientSocket::~ClientSocket()
{
    // closing the socket
    close(socket_fd_);
}

std::string ClientSocket::readLine()
{
    char c = '\n';
    std::string s = "";
    // reading the socket one by one character until \0 is sent
    if (g_verbose)
    {
        std::cout << "receiving from client..." << std::endl;
    }
    do
    {
        // reading
        if(read(socket_fd_, &c, sizeof(char)) == -1)
        {
            throw ExceptionSocketClient(ExceptionSocketClientTypes::Reading, errno);
        }
        // if c is not \0
        if (c != '\n')
        {
            // concatenate the character to the string
            s += c;
        }
    }while (c != '\n');
    // return the whole string at the end
    if (g_verbose)
    {
        std::cout << "received from client: " + s << std::endl;
    }
    return s;
}

void ClientSocket::writeString(std::string data)
{
    if (g_verbose)
    {
        std::cout << "sending to client: " + data << std::endl;
    }
    data += '\n';
    if (write(socket_fd_, data.c_str(), data.size()) == -1)
    {
        throw ExceptionSocketClient(ExceptionSocketClientTypes::Writing, errno);
    }
}

ExceptionSocketClient::ExceptionSocketClient(ExceptionSocketClientType type, int errno_c = 0) throw()
    :type_(type),errno_(errno_c)
{
    std::string reason;
    switch(type_)
    {
        case ExceptionSocketClientTypes::NoError:
            reason = "no error";
            break;
        case ExceptionSocketClientTypes::Reading:
            reason = "can't read through the client socket";
            break;
        case ExceptionSocketClientTypes::Writing:
            reason = "can't write through the client socket";
            break;
    }
    explaination_ = reason + " errno: " + std::to_string(errno_);
}

const char *ExceptionSocketClient::what() const throw()
{
    return explaination_.c_str();
}

ServerSocket::ServerSocket(unsigned int port, int max_connection_pending = 10,in_addr_t accept_from = INADDR_ANY)
{
    // creation of the socket
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0); // create a IPv4 for TCP connection
    if (socket_fd_ == -1) // if the creation failed
    {
        throw ExceptionSocketServer(ExceptionSocketServerTypes::Creation, errno);
    }

    // binding the socket to the port
    server_address_.sin_addr.s_addr = htonl(accept_from); // accepting from any address
    server_address_.sin_family = AF_INET;
    server_address_.sin_port = htons(port);
    if (bind(socket_fd_, (struct sockaddr *) &server_address_, sizeof(server_address_)) == -1)
    {
        // if an error occured while binding
        throw ExceptionSocketServer(ExceptionSocketServerTypes::Binding, errno, port);
    }

    // listening
    if (listen(socket_fd_, max_connection_pending) == -1)
    {
        throw ExceptionSocketServer(ExceptionSocketServerTypes::Listening, errno);
    }
}

ServerSocket::~ServerSocket()
{
    // closing the socket
    close(socket_fd_);
}

ClientSocket* ServerSocket::waitingForConnection()
{
    // declaration
    int client_fd;
    sockaddr_in client_address = {0};
    socklen_t client_address_size = sizeof(client_address);
    // waiting for connection
    if (g_verbose)
    {
        std::cout << "waiting for client..." << std::endl;
    }
    client_fd = accept(socket_fd_, (struct sockaddr *) &client_address, &client_address_size);
    if (g_verbose)
    {
        std::cout << "client accepted" << std::endl;
    }
    // return the ClientSocket corresponding to the previous information
    return new ClientSocket(client_fd, client_address, client_address_size);
}

ExceptionSocketServer::ExceptionSocketServer(ExceptionSocketServerType type, int errno_c = 0) throw()
    :type_(type),errno_(errno_c)
{
    std::string reason;
    switch(type_)
    {
        case ExceptionSocketServerTypes::NoError:
            reason = "no error";
            break;
        case ExceptionSocketServerTypes::Creation:
            reason = "can't create the socket";
            break;
        case ExceptionSocketServerTypes::Binding:
            reason = "can't bind the socket to the port";
            break;
        case ExceptionSocketServerTypes::Listening:
            reason = "the socket can't listen";
            break;
        case ExceptionSocketServerTypes::Closing:
            reason = "can't close the socket";
            break;
    }
    explaination_ = reason + " errno: " + std::to_string(errno_);
}

ExceptionSocketServer::ExceptionSocketServer(ExceptionSocketServerType type, int errno_c = 0, int port = 0) throw()
    :type_(type),errno_(errno_c)
{
    std::string reason;
    switch(type_)
    {
        case ExceptionSocketServerTypes::NoError:
            reason = "no error";
            break;
        case ExceptionSocketServerTypes::Creation:
            reason = "can't create the socket";
            break;
        case ExceptionSocketServerTypes::Binding:
            reason = "can't bind the socket to the port: " + std::to_string(port);
            break;
        case ExceptionSocketServerTypes::Listening:
            reason = "the socket can't listen";
            break;
        case ExceptionSocketServerTypes::Closing:
            reason = "can't close the socket";
            break;
    }
    explaination_ = reason + " errno: " + std::to_string(errno_);
}

const char *ExceptionSocketServer::what() const throw()
{
    return explaination_.c_str();
}

