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

#include "PracticalSocket.h" 

#ifndef MSOCKET_H
#define	MSOCKET_H

class mSocket {
public:
	mSocket();
	mSocket(const mSocket& orig);
	virtual ~mSocket();

	void send(string str, TCPSocket *sock);

	void c_buffer_str(char *charBuffer, int RCVBUFSIZE);

	string getInStr();
private:
	string str;
};


#endif	/* MSOCKET_H */

