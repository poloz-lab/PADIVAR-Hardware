#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>


class Interface
{
protected:
    int fd_;
public:
    virtual void send(std::string message) = 0; 
    virtual std::string receive() = 0;
};

#endif