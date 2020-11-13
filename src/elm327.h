#ifndef ELM327_h
#define ELM327_h
#include "device.h"

class Elm327 : public Device
{
private:
    Elm327();
public:
    Elm327(Interface* communication_medium);
    void initialization();
    std::string sendOBD(std::string obd_code);
};

#endif