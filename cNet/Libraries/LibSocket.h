/*
 * File:   mSocket.h
 * Author: williamvolkweis
 *
 * Created on July 4, 2015, 11:25 PM
 */

#include <stdio.h>

#include <vector>

#include <string.h>

#include <sstream>

#include <stdlib.h>

#include "../Socket/PracticalSocket.h"



#ifndef LIBSOCKET_H
#define LIBSOCKET_H

class LibSocket
{
public:
	LibSocket();
	LibSocket(const LibSocket& orig);
	virtual ~LibSocket();

	void send(string str, TCPSocket *sock);

	void c_buffer_str(char *charBuffer, int RCVBUFSIZE);

	string getInStr();
private:
	string str;
};


#endif	/* LIBSOCKET_H */
