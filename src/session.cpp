#include "session.h"



Session::Session(char* ConnectionType_, char* ConnectionPath_, sockaddr_in socket_client_)
{
    this->socket_client_ = socket_client_;

    if(ConnectionType_ != "all")
    {
        this->ConnectionType_ = ConnectionType_;
        if(ConnectionPath_ == "USB" || ConnectionPath_ == "wifi" || ConnectionPath_ == "bluetooth")
        {
            this->ConnectionType_ = ConnectionType_;
        }
        else if (ConnectionPath_ == "all")
        {
            if(ConnectionType_== "USB")
            {
               
            }
            else if(ConnectionType_=="wifi")
            {

            }
            else if(ConnectionType_=="bluetooth")
            {

            }
            else
            {
                throw std::invalid_argument("Wrong connection type");
            }
            
        }
        else
        {
            throw std::invalid_argument("Wrong connection type");
        }
        /*TODO if path is valid */
    }
    else
    {

    }
}

Session::~Session()
{

}

char* Session::GetConnectionType()
{
    return this->ConnectionType_;
}

char* Session::GetConnectionPath()
{
    return this->ConnectionPath_;
}

sockaddr_in Session::Getsocket_client()
{
    return this->socket_client_;
}

void Session::API_redicretion()
{

}
