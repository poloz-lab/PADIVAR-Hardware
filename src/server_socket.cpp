#include "server_socket.h"
#include <string>
#include <unistd.h>

/*!
 * \file server_socket.c
 * \brief socket for accpeting connexion from clients
 * \author poloz-lab
 * \version 0.1
 * \date 20/10/2020
 */

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
    return s;
}

void ClientSocket::writeString(std::string data)
{
    if (write(socket_fd_, data.c_str(), sizeof(data.c_str())) == -1)
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
        throw ExceptionSocketServer(ExceptionSocketServerTypes::Binding, errno);
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

ClientSocket ServerSocket::waitingForConnection()
{
    // declaration
    int client_fd;
    sockaddr_in client_address = {0};
    socklen_t client_address_size = sizeof(client_address);
    // waiting for connection
    client_fd = accept(socket_fd_, (struct sockaddr *) &client_address, &client_address_size);
    // return the ClientSocket corresponding to the previous information
    return ClientSocket(client_fd, client_address, client_address_size);
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
        case ExceptionSocketServerTypes::Closing:
            reason = "can't close the socket";
    }
    explaination_ = reason + " errno: " + std::to_string(errno_);
}

const char *ExceptionSocketServer::what() const throw()
{
    return explaination_.c_str();
}

