/* 
 * File:   networkSocket.h
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 3:42 PM
 */

#ifndef SERVERSOCKET_H

#define	SERVERSOCKET_H

#include <stdio.h>

#include <stdlib.h>

#include "PracticalSocket.h" //from http://cs.ecs.baylor.edu/~donahoo/practical/CSockets/practical/

using namespace std;

// Size of receive buffer 
const int RCVBUFSIZE = 32;


class serverSocket {

public:
    serverSocket();
    
    serverSocket(const serverSocket& orig);
    
    virtual ~serverSocket();
    
    void error(const char *msg)
    {
   
    }
    
    void HandleTCPClient(TCPSocket *sock) {
        cout << "Handling client ";
        
        try {
        
            cout << sock->getForeignAddress() << ":";
        
        } catch (SocketException e) {
            
            cerr << "Unable to get foreign address" << endl;
        }
        
        try {
        
            cout << sock->getForeignPort();
        
        } catch (SocketException e) {
        
            cerr << "Unable to get foreign port" << endl;
        }
        
        cout << endl;

        // Send received string and receive again until the end of transmission
        char echoBuffer[RCVBUFSIZE];
        
        int recvMsgSize;
        
        while ((recvMsgSize = sock->recv(echoBuffer, RCVBUFSIZE)) > 0) { // Zero means
                                                             // end of transmission
            // Echo message back to client
            sock->send(echoBuffer, recvMsgSize);
        
        }
        delete sock;
    }
    
    void init(){
        cout << "Listen on port: " << getPort() << endl;
        unsigned short echoServPort = getPort();
        
        
        try {
            TCPServerSocket servSock(echoServPort);     // Server Socket object
    
            for (;;) {   // Run forever
            
                HandleTCPClient(servSock.accept());       // Wait for a client to connect
        
            }
        } catch (SocketException &e) {
            
            cerr << e.what() << endl;
            
            exit(1);
        }
        // NOT REACHED
        
    }

    void setPort(int port){
        this->port = port;
    }

    int getPort(){
        return this->port;
    }

private:
    int port;

};

#endif	/* NETWORKSOCKET_H */

