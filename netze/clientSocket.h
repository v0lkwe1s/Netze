/* 
 * File:   clientSocket.h
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 4:56 PM
 */

#ifndef CLIENTSOCKET_H

#define	CLIENTSOCKET_H

#include "PracticalSocket.h"  //from http://cs.ecs.baylor.edu/~donahoo/practical/CSockets/practical/

#include <iostream>    

#include <cstdlib>     

#include <string.h>

using namespace std;

class clientSocket {
public:
	clientSocket();

	clientSocket(string address, char* msg, int port) :
	address(address), msg(msg), port(port)
	{
	}

	clientSocket(const clientSocket& orig);
	virtual ~clientSocket();

	void init();

	void setPort(int port);

	int getPort();

	void setAddress(string address);

	string getAddress();

	void send(char *msg);

	char *getSend();

private:

	int port;

	string address;

	char *msg;
};

#endif	/* CLIENTSOCKET_H */

