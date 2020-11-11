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
        /* faire un if pour verifier si le chemin rentré est valide*/
    }
    else
    {
        char * Path_list = system (ls /dev | grep -E tty[^0-9S]); //juste pour USB
        /*Todo pour tous les autres type de connection et creer une variable qui renvoie toute une liste*/
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
