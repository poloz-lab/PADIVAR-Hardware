#ifndef WIFI_H
#define WIFI_H
#include <string>


class Wifi : protected Interface
{
private:
    std::string ip_address;
    int port;
    Wifi();
    ~Wifi();
public:

    Wifi(std::string ip_address, int port); 
};

#endif