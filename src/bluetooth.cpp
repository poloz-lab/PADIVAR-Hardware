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

/*!
 * \file bluetooth.cpp
 * \brief handle bluetooth connections
 */

#include "bluetooth.h"
#include <list>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/rfcomm.h>
#include <exception>
#include <stdexcept>
#include <iostream>

extern bool g_verbose;

Bluetooth::Bluetooth()
{
   
}

Bluetooth::~Bluetooth()
{
    if (fd_)
    {
        close(fd_);
    }
}

Bluetooth::Bluetooth(std::string mac_address)
{  
    struct sockaddr_rc addr = {0};
    const char *destination = mac_address.c_str();
   
    // creation of the socket
    fd_ = socket(AF_BLUETOOTH, SOCK_STREAM, BTPROTO_RFCOMM);
    if (fd_ == -1) // if the creation failed
    {
        throw std::runtime_error("can't create the bluetooth socket");
    }
    // set connection parameters
    addr.rc_family = AF_BLUETOOTH;
    addr.rc_channel = (uint8_t) 1; // default channel
    str2ba(destination, &addr.rc_bdaddr); 

    // connection
    if (connect(fd_, (struct sockaddr *)&addr, sizeof(addr)))
    {
        throw std::runtime_error("can't connect to bluetooth destination");
    }
    if (g_verbose)
    {
        std::cout << "bluetooth connection successful " << std::endl;
    }
}

void Bluetooth::sendMessage(std::string message)
{
    if (g_verbose)
    {
        std::cout << "bluetooth sending: " << message << std::endl;
    }
    ssize_t status = 0;
    status = send(fd_, message.c_str(), message.size(), 0);
    if (status == (ssize_t) -1)
    {
        throw std::runtime_error("cannot send message through Bluetooth");
    }
    else if (status != (ssize_t) message.size())
    {
        throw std::runtime_error("message sent through Bluetooth is incomplete");
    }
}

std::string Bluetooth::receive(char stopCharacter)
{
    char c = stopCharacter;
    std::string s = "";
    // reading the socket one by one character until stop character is sent
    do
    {
        // receiving
        if (recv(fd_, &c, sizeof(char), 0) <= 0)
        {
            throw std::runtime_error("can't receive through Bluetooth");
        }
        // if c is not stop character
        if (c != stopCharacter)
        {
            // concatenate the character to the string
            s += c;
        }
    } while (c != stopCharacter);
    // return the whole string at the end
    if (g_verbose)
    {
        std::cout << "bluetooth received : " << s << std::endl;
    }
    return s;
}
