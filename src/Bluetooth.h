#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include <string>


class Bluetooth : protected Interface
{
private:
    std::string mac_address;
    Bluetooth();
    ~Bluetooth();
public:
    Bluetooth(std::string mac_address); 
};

#endif