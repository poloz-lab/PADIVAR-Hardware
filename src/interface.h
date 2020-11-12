#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>


class Interface
{
public:
    virtual void send(std::string message) = 0; 
    virtual std::string receive() = 0;
};

#endif