/* 
 * File:   networkSocket.h
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 3:42 PM
 */

#ifndef SERVERSOCKET_H

#define	SERVERSOCKET_H

//mine libs
#include "mSocket.h"

#include "strLib.h"

//other libs
#include "PracticalSocket.h"
#include "board.h" //from http://cs.ecs.baylor.edu/~donahoo/practical/CSockets/practical/

using namespace std;

// Size of receive buffer 
const int RCVBUFSIZE = 256;

class serverSocket {
public:
	serverSocket();

	serverSocket(const serverSocket& orig);

	virtual ~serverSocket();

	void error(const char *msg);

	void init();

	void HandleTCPClient(TCPSocket *sock);

	void setPort(int port);

	int getPort();

private:
	int port;
	strLib s;
	mSocket ms;
};

#endif	/* NETWORKSOCKET_H */