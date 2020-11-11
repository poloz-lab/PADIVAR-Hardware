#include "usb.h"

Usb::Usb()
{
    this->path = "\0";
}

Usb::Usb(std::string p_path)
{
    this->path = p_path;
}

Usb::~Usb()
{

}

void Usb::send(std::string message)
{

}

std::string Usb::receive()
{
    
}
