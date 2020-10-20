#ifndef SERVER_SOCKET_H
#define SERVER_SOCKET_H

/*!
 * \file server_socket.h
 * \brief socket for accepting connexion from clients
 * \author poloz-lab
 * \version 0.1
 * \date 20/10/2020
 */
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <cerrno>
#include <exception>

/*!
 * \class ServerSocket
 * \brief class for the server socket
 */
class ServerSocket
{
public:
    /*!
     * \brief constructor
     * \param port : network port for listening connections
     * \param max_connection_pending : number of maximum connection pending
     * default is 10
     * \param accept_from : source address accepted from the socket.
     * default is INADDR_ANY
     */
    ServerSocket(unsigned int port, int max_connection_pending, in_addr_t accept_from);
private:
    int socket_fd_; /*< file descriptor for the socket */
    struct sockaddr_in server_address_; /*< structure for ip, stores accepted addresses, port */
};

/*!
 * \namespace
 */
namespace ExceptionSocketServerTypes
{
    /*!
     * \enum ExceptionSocketServerType
     * \brief type of error that could be encountered with the server socket
     */
    enum ExceptionSocketServerType
    {
        NoError, /*!< no error */
        Creation, /*!< error while creating the socket */
        Binding, /*!< error while binding the socket to the port */
        Listening /*< error While trying to listening */
    };
}
typedef ExceptionSocketServerTypes::ExceptionSocketServerType ExceptionSocketServerType;

/*!
 * \class ExceptionSocketServer
 * \brief class for handling errors from the server socket
 */
class ExceptionSocketServer: public std::exception
{
public:
    /*!
     * \brief constructor
     * \param type : type of the error
     * \param errno_c : error number (errno) from C lib
     */
    ExceptionSocketServer(ExceptionSocketServerType type, int errno_c) throw();

    /*!
     * \brief give the reason of the exception
     * \return string to give the reason of the exception
     */
    virtual const char* what() const throw();
private:
    ExceptionSocketServerType type_;
    int errno_;
};

#endif
