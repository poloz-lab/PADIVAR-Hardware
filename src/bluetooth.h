#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include "interface.h"

class Bluetooth : public Interface
{
private:
    std::string mac_address_;
    int fd_;
    Bluetooth();
public:
    Bluetooth(std::string mac_address); 
    void send(std::string message); 
    std::string receive();
};

#endif