/* 
 * File:   main.cpp
 * Author: williamvolkweis
 *
 * Created on June 14, 2015, 5:14 PM
 */

#include <cstdlib>
#include<iostream>
#include <string.h>

#include "serverSocket.h"
#include "clientSocket.h"

using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {
    
    int i;
    if (argc <=1){
        cout << "Missing Parameters" << endl;
        cout << "Type --help for help" << endl;
        exit(-1);
    }
    for (i=1; i<=argc; i++){
    //if library run as socket
        if (strcmp(argv[i], "--enable-server") == 0) {
                        
            serverSocket nSocket;
                        
            if (strcmp(argv[i], "--port")){ 
                cout << "Set port on: " << argv[i+2] << endl; 
                nSocket.setPort(atoi(argv[i+2]));   
            }
            else {
                nSocket.setPort(45455);
            }
            
            nSocket.init();
    
        }
        if (strcmp(argv[i], "--enable-client") == 0) {
            clientSocket client;
            client.setAddress("127.0.0.1");
            client.setPort(45455);
            
            
        }
        
        if (strcmp(argv[i], "--help") == 0) {
            cout << "Options Available is: \n\n "
                    "--enable-server --port xxxx  \t to listen clients on port xxxx \n"
                    "--enable-client --port xxxx   \t to connect on server at port xxxx \n" << endl;
                    
            exit(-1);
        }
    }
 return 0;
}

