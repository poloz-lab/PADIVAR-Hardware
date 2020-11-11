#ifndef USB_H
#define USB_H
#include <string>


class Usb : protected Interface
{
private:
    std::string path;
    Usb();
    ~Usb();
public:
    Usb(std::string path); 
};

#endif