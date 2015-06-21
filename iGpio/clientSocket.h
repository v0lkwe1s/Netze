/* 
 * File:   clientSocket.h
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 4:56 PM
 */

#ifndef CLIENTSOCKET_H

#define	CLIENTSOCKET_H

#include "PracticalSocket.h"  // For Socket and SocketException

#include <iostream>           // For cerr and cout

#include <cstdlib>     // For atoi()

#include <string.h>

using namespace std;



class clientSocket {
public:
    clientSocket();
    clientSocket(const clientSocket& orig);
    virtual ~clientSocket();
    
    void init(){
        const int RCVBUFSIZE = 32;    // Size of receive buffer
        
        cout << "Conecting on server as: " << getAddress() << " on port: " << getPort() << endl;
        
        string servAddress = getAddress();
        
        char *echoString = getSend();
        
        int echoStringLen = strlen(echoString);   // Determine input length
        
        unsigned short echoServPort = getPort();
        
        try {
            // Establish connection with the echo server
            TCPSocket sock(servAddress, echoServPort);

            // Send the string to the echo server
            sock.send(echoString, echoStringLen);

            char echoBuffer[RCVBUFSIZE + 1];    // Buffer for echo string + \0

            int bytesReceived = 0;              // Bytes read on each recv()

            int totalBytesReceived = 0;         // Total bytes read

            // Receive the same string back from the server
            cout << "Received: ";               // Setup to print the echoed string
    
            while (totalBytesReceived < echoStringLen) {

                // Receive up to the buffer size bytes from the sender

                if ((bytesReceived = (sock.recv(echoBuffer, RCVBUFSIZE))) <= 0) {

                    cerr << "Unable to read";

                    exit(1);

                }

                totalBytesReceived += bytesReceived;     // Keep tally of total bytes

                echoBuffer[bytesReceived] = '\0';        // Terminate the string!

                cout << echoBuffer;                      // Print the echo buffer

            }

            cout << endl;


            // Destructor closes the socket


        } catch(SocketException &e) {

            cerr << e.what() << endl;

            exit(1);

        }


       

    }
    
    void setPort(int port){
    
        this-> port = port;
    
    }
    
    int getPort(){
    
        return this->port;
    
    }
    
    void setAddress(string address){
    
        this->address = address;
    
    }
    
    string getAddress(){
        
        return this->address;
    
    }
    
    void send(char *msg){
        
        this->msg = msg;
        
    }
    
    char *getSend(){
        
        return this -> msg;
        
    }
    
private:
    
    int port;
    
    string address;

    char *msg;
};

#endif	/* CLIENTSOCKET_H */

