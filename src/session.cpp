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
#include <stdexcept>
#include <string>
#include <typeinfo>
#include <exception>
#include <iostream>
#include "pid.h"



Session::Session()
{
    
}

Session::Session(ClientSocket* client)
{
    std::string type_device = "";
    std::string type_interface = "";
    std::string path = "";
    std::string ip_address = "";
    std::string port = "";
    std::string mac_address = "";

    client_ = client;
    type_device = client_->readLine();

    if(type_device == "elm327")
    {
        type_interface = client_->readLine();
        
        if(type_interface == "usb")
        {
            path = client_->readLine();
            try
            {
                connected_device_ = new Elm327(new Usb(path));
                client_->writeString("initialization ok");
            }
            catch(std::exception const& e)
            {
                client_->writeString("initialization failed");
                throw ExceptionSession(ExceptionSessionType::UsbInitializationFailed, e.what());
            }
        }
        else if(type_interface == "wifi")
        {
            ip_address = client_->readLine();
            port = client_->readLine();
            try
            {
                connected_device_ = new Elm327(new Wifi(ip_address, std::stoi(port)));
                client_->writeString("initialization ok");
            }
            catch(std::exception const& e)
            {
                client_->writeString("initialization failed");
                throw ExceptionSession(ExceptionSessionType::WifiInitializationFailed, e.what());
            }
        }
        else if(type_interface == "bluetooth")
        {
            mac_address = client_->readLine();
            try
            {
                connected_device_ = new Elm327(new Bluetooth(mac_address));
                client_->writeString("initialization ok");
            }
            catch(std::exception const& e)
            {
                client_->writeString("initialization failed");
                throw ExceptionSession(ExceptionSessionType::BluetoothInitializationFailed, e.what());
            }
        }
        else
        {
            throw ExceptionSession(ExceptionSessionType::UnknownInterface, type_interface);
        }
        
    }
    else if(type_device == "no device")
    {
            connected_device_ = nullptr;
            client->writeString("initialization ok");
    }
    else
    {
        throw ExceptionSession(ExceptionSessionType::UnknownDevice, type_device);
    }
}

Session::~Session()
{
}

int Session::interpreter()
{
    std::string command = "";
    command = client_->readLine();
    if (command == "quit")
    {
        return 1;
    }
    else if (command == "listPID") // if the client wants to know every pid supported by this software
    {
        std::string list; // string to take every pid separated by a space
        for (const auto hexPid : HexPids::all) // iterate through all pid
        {
            Pid p(hexPid);
            list += p.getPidString();
            list += " ";
        }
        list = list.substr(0, list.size() - 1); // remove last space
        client_->writeString(list);
        return 0;
    }
    else if (command == "description") // if the client wants to have description for a pid
    {
        std::string pidString = "";
        pidString = client_->readLine();
        try
        {
            Pid pid(pidString);
            client_->writeString(pid.getDescription());
        }
        catch(std::exception const& e)
        {
            std::cerr << e.what() << std::endl;
            client_->writeString(e.what());
        }        
        return 0;
    }
    else if (command == "units")
    {
        std::string pidString = "";
        pidString = client_->readLine();
        try
        {
            Pid pid(pidString);
            client_->writeString(pid.getUnits());
        }
        catch(std::exception const& e)
        {
            std::cerr << e.what() << std::endl;
            client_->writeString(e.what());
        }
        return 0;
    }
    else
    {
        throw ExceptionSession(ExceptionSessionType::UnknownCommand, command);
    }
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

ExceptionSession::ExceptionSession(ExceptionSessionType type) throw()
    :type_(type)
{
    std::string reason;
    switch(type_)
    {
        case ExceptionSessionType::NoError:
            reason = "no error";
            break;
        case ExceptionSessionType::UnknownDevice:
            reason = "unknown device";
            break;
        case ExceptionSessionType::UnknownInterface:
            reason = "unknown interface";
            break;
        case ExceptionSessionType::UsbInitializationFailed:
            reason = "USB initialization failed";
            break;
        case ExceptionSessionType::WifiInitializationFailed:
            reason = "Wifi initialization failed";
            break;
        case ExceptionSessionType::BluetoothInitializationFailed:
            reason = "Bluetooth initialization failed";
            break;
        case ExceptionSessionType::UnknownCommand:
            reason = "unknown command";
            break;
        default:
            reason = "Missing reason";
            break;
    }
    explaination_ = reason;
}

ExceptionSession::ExceptionSession(ExceptionSessionType type, std::string option) throw()
    :type_(type)
{
    std::string reason;
    switch(type_)
    {
        case ExceptionSessionType::NoError:
            reason = "no error";
            break;
        case ExceptionSessionType::UnknownDevice:
            reason = "unknown device: " + option;
            break;
        case ExceptionSessionType::UnknownInterface:
            reason = "unknown interface: " + option;
            break;
        case ExceptionSessionType::UsbInitializationFailed:
            reason = "USB initialization failed: " + option;
            break;
        case ExceptionSessionType::WifiInitializationFailed:
            reason = "Wifi initialization failed: " + option;
            break;
        case ExceptionSessionType::BluetoothInitializationFailed:
            reason = "Bluetooth initialization failed: " + option;
            break;
        case ExceptionSessionType::UnknownCommand:
            reason = "unknown command: " + option;
            break;
        default:
            reason = "Missing reason";
            break;
    }
    explaination_ = reason;
}

const char *ExceptionSession::what() const throw()
{
    return explaination_.c_str();
}