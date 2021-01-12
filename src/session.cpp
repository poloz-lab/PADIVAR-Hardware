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
#include "session.h"
#include <string>
#include <typeinfo>



Session::Session()
{
    
}

Session::Session(ClientSocket* client)
{
    client_ = client;
    std::string type_device = client_->readLine();

    if(type_device == "elm327")
    {
        std::string type_interface = client_->readLine();
        
        if(type_interface == "usb")
        {
            std::string path = client_->readLine();
            connected_device_ = new Elm327(new Usb(path));
            
        }
        else if(type_interface == "wifi")
        {
            std::string ip_address = client_->readLine();
            std::string port = client_->readLine();
            connected_device_ = new Elm327(new Wifi(ip_address, std::stoi(port)));
        }
        else if(type_interface == "bluetooth")
        {
            std::string mac_adress = client_->readLine();
            connected_device_ = new Elm327(new Bluetooth(mac_adress));
        }
        else
        {
            throw std::exception();
        }
        
    }
    else
    {
        throw std::exception();
    }
}

Session::~Session()
{
}

void Session::interpreter()
{

}

std::string Session::toString()
{
    std::string s = "";
    s += "session";
    if (connected_device_)
    {
        s += " with device ";
        s += typeid(connected_device_).name();
    }
    else
    {
        s += "with no device";
    }
    return s;
}
