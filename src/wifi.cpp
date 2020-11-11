#include "wifi.h"

Wifi::Wifi()
{
    this->port = -1;
    this->ip_address = "\0";
}

Wifi::Wifi(std::string p_ip_address, int p_port)
{
    this->ip_address = p_ip_address;
    this->port = p_port;
}

Wifi::~Wifi()
{

}
