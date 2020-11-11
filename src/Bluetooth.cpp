#include "Bluetooth.h"

Bluetooth::Bluetooth()
{
    this->mac_address = "\0";
}

Bluetooth::Bluetooth(std::string p_mac_address)
{
    this->mac_address = p_mac_address;
}

Bluetooth::~Bluetooth()
{

}
