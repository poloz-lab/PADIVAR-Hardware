#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include <string>
#include "interface.h"

class Bluetooth : protected Interface
{
private:
    std::string mac_address;
    Bluetooth();
    ~Bluetooth();
public:
    Bluetooth(std::string mac_address); 
    void send(std::string message); 
    std::string receive();
};

#endif