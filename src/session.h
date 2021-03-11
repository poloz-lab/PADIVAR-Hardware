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
#ifndef SESSION_H
#define SESSION_H

/*!
 * \file session.h
 * \brief handle a session with a client
 */

#include "device.h"
#include "server_socket.h"

#include "elm327.h"
#include "usb.h"
#include "wifi.h"
#include "bluetooth.h"

#include <string>

class Session
{
private:
	Device* connected_device_; /*!< Device connected for the session */
	ClientSocket* client_; /*!< Socket with the client to communicate with */

	/*!
	 * \brief forbid access to default constructor
	 */
	Session();
public:
	/*!
	 * \brief constructor for session
	 * \param client : socket with the client
	 * 
	 * initialize the session, receive some information from the client:
	 * device, interface...
	 */
	Session(ClientSocket* client);

	/*!
	 * \brief destructor
	 */
	~Session();

	/*!
	 * \brief interpret commands from client socket
	 * \return  0 if everything's fine. 1 if the client want to disconnect.
	 */
	int interpreter();

	/*!
	 * \brief translate the object into a string
	 * \return string that describes the object
	 */
    std::string toString();
};

/*!
 * \namespace ExceptionSessionTypes
 */
namespace ExceptionSessionTypes
{
	/*!
	 * \enum ExceptionSessionType
	 * \brief type of error that could be encountered in Session
	 */
	enum ExceptionSessionType
	{
		NoError, /*!< no error */
		UnknownDevice, /*!< device asked by the client is unknown */
		UnknownInterface, /*!< interface asked by the client is unknown */
		UsbInitializationFailed, /*!< usb initialization failed */
		WifiInitializationFailed, /*!< wifi initialization failed */
		BluetoothInitializationFailed, /*!< bluetooth initialization failed */
		UnknownCommand, /*!< command unknown in interpreter */
		NoDevice, /*!< the session is initialized with no device */
	};
}
typedef ExceptionSessionTypes::ExceptionSessionType ExceptionSessionType;

namespace StateInterpreterTypes
{
	/*!
	 * \enum StateInterpreterTypes
	 * \brief type of state of the interpreter that could occurs
	 */
	enum StateInterpreterType
	{
		NoError, /*!< no error */
		Quitting, /*!< Quit state */
	};
}
typedef StateInterpreterTypes::StateInterpreterType StateInterpreterType;
/*!
 * \class ExceptionSession
 * \brief class for handling errors in session
 */
class ExceptionSession: public std::exception
{
public:
	/*!
	 * \brief constructor with no details
	 * \param type : type of the error
	 */
	ExceptionSession(ExceptionSessionType type) throw();

	/*!
	 * \brief constructor which accept a detail
	 * \param type : type of the error
	 * \param option : detail of the error
	 */
	ExceptionSession(ExceptionSessionType type, std::string option) throw();

	/*!
	 * \brief give the reason of the exception
	 * \return string to give the reason of the exception
	 */
	virtual const char* what() const throw();

private:
	ExceptionSessionType type_; /*< type of exception */
	std::string explaination_; /*< string to explain the exception */
};

#endif
