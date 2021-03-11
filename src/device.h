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

#ifndef DEVICE_H
#define DEVICE_H

/*!
 * \file device.h
 * \brief manage devices connected to the car
 */

#include "interface.h"
#include "server_socket.h"
#include "pid.h"

/*!
 * \class Device
 * \brief Class to handle devices used to connect with the car.
 * 
 * They should perform some standard operation like sending an OBD code and others...
 */
class Device 
{
private:

protected:
    Interface* communication_medium_; /*!< communication medium used to communicate with the device */

    /*! 
     * \brief forbid access to default constructor
     */
    Device();
    /*!
     * \brief constructor with communication medium
     */
    Device(Interface* communication_medium);
public:
    /*!
     * \brief destructor that delete the communication_medium
     */
    virtual ~Device();

    /*!
     * \brief Initialize the device.
     */
    virtual void initialization()=0;

    /*!
     * \brief Send an OBD code. Return the answer.
     * \param obd_code : OBD code to send (as string)
     * \return answer of the vehicle cleaned
     */
    virtual std::string sendOBD(std::string obd_code)=0;
    std::vector<Pid> getPidList();
    std::string  HexToBin(std::string hexPid);
    /*!
     * \brief send a PID through OBD
     * \param PID : PID to send
     * \return the answer of the vehicle
     */
    std::string sendPid(Pid const& pid);

    //Pid diagnostic(ClientSocket client_socket);
};

#endif
