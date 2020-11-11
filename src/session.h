#ifndef SESSION_H
#define SESSION_H

#include <cstdio>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <unistd.h>

class Session
{
protected:
	char* ConnectionType_;
	char* ConnectionPath_;
	struct sockaddr_in socket_client_;
private:
	Session(char* ConnectionType_, char* ConnectionPath_, sockaddr_in socket_client_);
	~Session();
	char* GetConnectionType();
	char* GetConnectionPath();
	sockaddr_in Getsocket_client();
	void API_redicretion ();
};

#endif