/* 
 * File:   networkSocket.cpp
 * Author: williamvolkweis
 * 
 * Created on June 21, 2015, 3:42 PM
 */

#include <iostream>

#include "serverSocket.h"

serverSocket::serverSocket() {
    cout << "Starting network Socket" << endl;
}

//set socket listen port 
void serverSocket::setPort(int port) {
    this->port = port;
}

//initialize socket listen
void serverSocket::init() {
    cout << "Listen on port: " << getPort() << endl;
    
    try {
        //start listen on port
        TCPServerSocket servSock(getPort()); 
        for (;;) { 
            //mono threaded socket
            HandleTCPClient(servSock.accept());
        }

    } catch (SocketException &e) {
        cerr << e.what() << endl;
        exit(1);
    }
}


int serverSocket::getPort() {
    return this->port;
}


void serverSocket::error(const char* msg) {
    cout << msg << endl;
}

void serverSocket::HandleTCPClient(TCPSocket* sock) {

    char charBuffer[RCVBUFSIZE];
    int recvMsgSize;
    
    //received message 
    if ((recvMsgSize = sock->recv(charBuffer, RCVBUFSIZE)) > 0) {
        //show client
        s.newClient(sock);
        //get message and convert to string
        ms.c_buffer_str(charBuffer, recvMsgSize);
        s.sout("Received Command: " + ms.getInStr());

        
        int pipe = 0;
        
        //parameter's delimiter is |
        pipe = ms.getInStr().find("|");

        if (pipe != -1) {
            //create a vector for interpret command.
            vector<string> v;
            s.split(ms.getInStr(), '|', v);
            //identifying command type
            //system in first position, drop second parameter to shell
            if (strcmp(v[0].c_str(), "system") == 0) {
                system(v[1].c_str());
            }
            //gpio in first needs other parameter's to run
            //gpio|enable-disable|pin|in-out
            //v[1] enable-disable
            //v[2] Pin number
            //v[3] direction in-out
            //this command make an export GPIO to use;
            
            //TODO//
            //create an option to send PinHeader to application//
            
            
            if (strcmp(v[0].c_str(), "gpio") == 0) {
                if (v.size() >= 4) {
                    if ((strcmp(v[1].c_str(), "enable") == 0) && ((strcmp(v[3].c_str(), "in") == 0) || (strcmp(v[3].c_str(), "out") == 0))) {
                        
                        ms.send("Done", sock);
                    }
                }
            }

        }
        else {
            ms.send("Command not reconized!", sock);
        }
    }
    //at end close socket and listen again
    delete sock;
}

serverSocket::serverSocket(const serverSocket& orig) {
}

serverSocket::~serverSocket() {
}

