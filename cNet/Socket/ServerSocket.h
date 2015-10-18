/*
 * File:   networkSocket.h
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 3:42 PM
 */

#ifndef SERVERSOCKET_H
#define	SERVERSOCKET_H

#include "../Libraries/LibSocket.h"
#include "../Libraries/LibStr.h"
#include "PracticalSocket.h"
#include "../Model/Board.h"

using namespace std;

// Size of receive buffer
const int RCVBUFSIZE = 256;

class ServerSocket
{
public:
	ServerSocket();

	ServerSocket(const ServerSocket& orig);

	virtual ~ServerSocket();

	void error(const char *msg);

	void init();
	
	Board getB() const;

	void setB(Board b);

	LibSocket getMs() const;

	void setMs(LibSocket ms);

	int getPort() const;

	void setPort(int port);
	
private:

	Board b;
	int port;
	LibSocket ms;
	
};

#endif	/* NETWORKSOCKET_H */
