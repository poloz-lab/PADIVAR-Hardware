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

#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include "interface.h"

/*!
 * \class Bluetooth
 * \brief Class that represents a Bluetooth interface used to communicate with a device.
 */
class Bluetooth : public Interface
{
private:
    std::string mac_address_; /*!< MAC address of the bluetooth device */
    int fd_;
    Bluetooth();
public:
    /*!
     * \brief destructor that close the socket
     */
    ~Bluetooth();

    /*!
     * \brief constructor to connect to bluetooth device
     * \param mac_address : mac address of the device
     * 
     * this constructor uses RFCOMM socket with channel 1 hardcoded
     */
    Bluetooth(std::string mac_address); 
    void sendMessage(std::string message); 
    std::string receive(char stopCharacter);
};

#endif
