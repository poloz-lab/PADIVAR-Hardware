#include "server_socket.h"
#include <string>

/*!
 * \file server_socket.c
 * \brief socket for accpeting connexion from clients
 * \author poloz-lab
 * \version 0.1
 * \date 20/10/2020
 */

ServerSocket::ServerSocket(unsigned int port)
{
    // creation of the socket
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0); // create a IPv4 for TCP connection
    if (socket_fd_ == -1) // if the creation failed
    {
        throw ExceptionSocketServer(ExceptionSocketServerTypes::Creation, errno);
    }
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
    }
    std::string detailed_reason = reason + " errno: " + std::to_string(errno_);
    return detailed_reason.c_str();
}
