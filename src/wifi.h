#ifndef WIFI_H
#define WIFI_H
#include <string>
#include "interface.h"

class Wifi : protected Interface
{
private:
    std::string ip_address_;
    int port_;
    Wifi();
public:
    Wifi(std::string ip_address, int port); 
    void send(std::string message); 
    std::string receive();
};

#endif