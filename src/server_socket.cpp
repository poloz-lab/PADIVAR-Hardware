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
    server_address_.sin_family = htons(port);
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

ExceptionSocketServer::ExceptionSocketServer(ExceptionSocketServerType type, int errno_c = 0) throw()
    :type_(type),errno_(errno_c)
{
}

const char *ExceptionSocketServer::what() const throw()
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
    std::string detailed_reason = reason + " errno: " + std::to_string(errno_);
    return detailed_reason.c_str();
}

