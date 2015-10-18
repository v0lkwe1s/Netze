/*
 * File:   mSocket.cpp
 * Author: williamvolkweis
 *
 * Created on July 4, 2015, 11:25 PM
 */

#include "LibSocket.h"
#include "LibStr.h"

LibSocket::LibSocket()
{
}

LibSocket::LibSocket(const LibSocket& orig)
{
}

LibSocket::~LibSocket()
{
}
//convert char buffer to String

void LibSocket::c_buffer_str(char* charBuffer, int RCVBUFSIZE)
{
	string c_str = "";
        cout << "dsdfsdfsdfsdfsdf" << endl;
	for (int i = 2; i < RCVBUFSIZE; i++) {
		c_str = c_str + charBuffer[i];
                cout << c_str << endl;
	}
	str = c_str;
}

//convert string to char buffer

void LibSocket::send(string str, TCPSocket* sock)
{
	char *wbuff;
	wbuff = (char *) str.c_str();
	sock->send(wbuff, strlen(wbuff));
}

//get string passed of socket

string LibSocket::getInStr()
{
	return this->str;
}
