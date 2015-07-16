/* 
 * File:   mSocket.cpp
 * Author: williamvolkweis
 * 
 * Created on July 4, 2015, 11:25 PM
 */

#include "mSocket.h"

mSocket::mSocket() {
}

mSocket::mSocket(const mSocket& orig) {
}

mSocket::~mSocket() {
}
//convert char buffer to String
void mSocket::c_buffer_str(char* charBuffer, int RCVBUFSIZE) {
    string c_str = "";
    for (int i = 2; i < RCVBUFSIZE; i++) {
        c_str = c_str + charBuffer[i];
    }
    str = c_str;
}

//convert string to char buffer
void mSocket::send(string str, TCPSocket* sock) {
    char *wbuff;
    wbuff = (char *) str.c_str();
    sock->send(wbuff, strlen(wbuff));
}

//get string passed of socket 
string mSocket::getInStr() { 
    return this->str;
}


