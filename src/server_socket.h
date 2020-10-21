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
#include <string>

/*!
 * \class ClientSocket
 * \brief class for the connection with the client
 *
 * this class has to be instantiated when the server socket accept a connection
 * and a new socket file descriptor is created. This class also contains the
 * information about the client, and some methods to communicate with him.
 */
class ClientSocket
{
public:
    /*!
     * \brief constructor
     * \param socket_fd : file descriptor of the client socket
     * \param client_address : structure sockaddr_in about the client connexion
     * \param client_address_size : size of the structure sockaddr_in
     */
    ClientSocket(int socket_fd, sockaddr_in client_address, socklen_t client_address_size);
    
    /*!
     * \brief destructor
     *
     * close the socket
     */
    ~ClientSocket();

    /*!
     * \brief read data from the socket
     * \return string readed
     */
    std::string readString();
private:
    ClientSocket(); // forbid access to default constructor
    int socket_fd_; /*!< client socket file descriptor */
    struct sockaddr_in client_address_; /*!< structure for ip, port */
    socklen_t client_address_size_; /*!< size of the structure sockaddr_in */
};

/*!
 * \namespace ExceptionSocketClientTypes
 */
namespace ExceptionSocketClientTypes
{
    /*!
     * \enum ExceptionSocketClientType
     * \brief type of error that could be encountered with the client socket
     */
    enum ExceptionSocketClientType
    {
        NoError, /*!< no error */
        Reading /*!< error while reading through the socket */
    };
}
typedef ExceptionSocketClientTypes::ExceptionSocketClientType ExceptionSocketClientType;

/*!
 * \class ExceptionSocketClient
 * \brief class for handling errors from the client socket
 */
class ExceptionSocketClient: public std::exception
{
public:
    /*!
     * \brief constructor
     * \param type : type of the error
     * \param errno_c : error number (errno) from C lib
     */
    ExceptionSocketClient(ExceptionSocketClientType type, int errno_c) throw();

    /*!
     * \brief give the reason of the exception
     * \return string to give the reason of the exception
     */
    virtual const char* what() const throw();
private:
    ExceptionSocketClientType type_;
    int errno_;
};

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

    /*!
     * \brief destructor
     */
    ~ServerSocket();

    /*!
     * \brief waiting for a connection from a client
     *
     * waiting for a client connection to the socket.
     * BLOCKING FUNCTION
     */
    ClientSocket waitingForConnection();
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
        Listening, /*< error While trying to listening */
        Closing /*< error while closing the socket */
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
