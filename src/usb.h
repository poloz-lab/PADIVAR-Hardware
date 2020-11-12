#ifndef USB_H
#define USB_H
#include <string>
#include "interface.h"

class Usb : protected Interface
{
private:
    std::string path_;
    int fd_;
    Usb();
public:
    Usb(std::string path); 
    void send(std::string message); 
    std::string receive();
};

#endif