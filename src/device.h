#ifndef DEVICE_H
#define DEVICE_H
#include "interface.h"
#include "server_socket.h"
class Device 
{
protected:
    Interface* communication_medium;
public:
    virtual void initialization()=0;
    virtual std::string sendOBD(std::string obd_code)=0;
    //Pid getPidList();
    //std::string sendPid(Pid pid);
    //Pid diagnostic(ClientSocket client_socket);
};

#endif