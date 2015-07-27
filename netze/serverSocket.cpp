/* 
 * File:   networkSocket.cpp
 * Author: williamvolkweis
 * 
 * Created on June 21, 2015, 3:42 PM
 */

#include <iostream>
#include <unistd.h>

#include "serverSocket.h"
#include "board.h"

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
            serverSocket().~serverSocket();
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
board b;

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
        if (ms.getInStr().find("HTTP/1.1") && (pipe == -1)) {
            cout << "Envia Resposta HTTP" << endl;
            string resp = "HTTP/1.0 200 OK\r\n"
                    "Content-Type: text/html\r\n"
                    "Content-Length: 30\r\n\r\n"
                    "<html><body>Nothing To Do Here! <br> Get out! </body></html>";
            ms.send(resp, sock);

        } else if (pipe != -1) {
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
            if (strcmp(v[0].c_str(), "getBoard") == 0) {
                b.getBoard(v[1].c_str());
                vector<Pin> pins;
                pins = b.getPins();
                for (int i = 1; i < pins.size(); i++) {
                    string portMap;
                    portMap = ":" + pins[i].GetNType() + "|" + pins[i].GetNPin() + "|" + pins[i].GetNGpio();
                    ms.send(portMap, sock);
                }
            } else if (strcmp(v[0].c_str(), "gpio") == 0) {
                if (v.size() >= 4) {
                    if ((strcmp(v[1].c_str(), "enable") == 0) && ((strcmp(v[3].c_str(), "in") == 0) || (strcmp(v[3].c_str(), "out") == 0))) {
                        ms.send("Done", sock);
                    }
                }
            }//TODO
                //send reads of pins

                //this block is for perform actuation in pin's
                //need these parameter's
                //v[0] - performAct
                //v[1] - direction
                //v[2] - pin
                //v[3] - value
            else if (strcmp(v[0].c_str(), "performAct") == 0) {
                if (b.getPins().empty()) {
                    ms.send("Board Not Defined", sock);
                    for (int i = 0; i < v.size(); i++) {
                        v.pop_back();
                    }
                }
                if (v.size() >= 3) {
                    if (strcmp(v[1].c_str(), "out") == 0) {
                        //echo "out" > /sys/class/gpio/gpioXXX/direction
                        vector<Pin> pins;
                        pins = b.getPins();
                        string gpio;
                        for (int i = 0; i < pins.size(); i++) {
                            if (strcmp(v[2].c_str(), pins[i].GetNPin().c_str()) == 0)
                                gpio = pins[i].GetNGpio();
                        }
                        string sysReq = "echo \"out\" > /sys/class/gpio/gpio" + gpio + "/direction";
                        cout << sysReq << endl;
                        system(sysReq.c_str());
                        //echo 1 > /sys/class/gpio/gpio4/value
                        sysReq = "echo " + v[3] + " /sys/class/gpio/gpio" + gpio + "/value";
                        cout << sysReq << endl;
                        system(sysReq.c_str());
                        ms.send("Act Performed", sock);
                    }
                }
            }


        } else {
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

