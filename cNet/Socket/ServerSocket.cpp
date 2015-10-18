/*
 * File:   networkSocket.cpp
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 3:42 PM
 */

#include <iostream>
#include <unistd.h>
#include "ServerSocket.h"
#include <thread>
#include "../Model/Board.h"
#include "../Modules/Blink.h"
#include "../Modules/Spi.h"
#include "../Libraries/LibSpi.h"
#include <exception>

using namespace std;

ServerSocket::ServerSocket() {
    cout << "Starting network Socket" << endl;
}

int ServerSocket::getPort() const {
    return this->port;
}

void ServerSocket::setPort(int port) {
    this->port = port;
}

LibStr s;
LibSocket ms;
Board b = b;

void HandleTCPClient(TCPSocket *sock);     // TCP client handling function
void *ThreadMain(void *arg);               // Main program of a thread

void ServerSocket::init(){
	try {    
		TCPServerSocket servSock(getPort());
		for (;;) {
                    TCPSocket *clntSock = servSock.accept();
                    //thread threadID(ThreadMain, (void *) clntSock);
                    //threadID.detach();
                    HandleTCPClient(clntSock);
                    
		}
	} catch (SocketException &e) {
            cout << e.whatErr() << endl;
	}
}

void HandleTCPClient(TCPSocket *sock){

	char charBuffer[RCVBUFSIZE];
	int recvMsgSize;
        vector<string> v;
        vector<string> param;
	//received message
	if ((recvMsgSize = sock->recv(charBuffer, RCVBUFSIZE)) > 0) {
           if ((charBuffer[RCVBUFSIZE]) != '\0' && (recvMsgSize >= 1)){
            ms.c_buffer_str(charBuffer, recvMsgSize);
            cout << "depois de converter" << endl;
                cout << ms.getInStr() << endl;
		int pipe = 0;
		//parameter's delimiter is |
		pipe = ms.getInStr().find("|");
                
		if (ms.getInStr().find("HTTP/1.1") && (pipe == -1)) {
			string resp = "HTTP/1.0 200 OK\r\n"
			              "Content-Type: text/html\r\n"
			              "Content-Length: 30\r\n\r\n"
			              "</body></html>\r\n\r\n";
                        string g = s.subString(ms.getInStr().c_str(), " HTTP/1.1");
                        g = s.subString(g, "T /");
                        s.split(g, '/', param);
                         if (strcmp(param[0].c_str(), "spi") ==0 ){
                             Spi spi;
                             spi.send(param[1], sock);
                            }
                        ms.send(resp, sock);
                        }
		 else if (pipe != -1) {
			//create a vector for interpret command.
			s.split(ms.getInStr(), '|', v);
			//identifying command type
			//system in first position, drop second parameter to shell
			if (strcmp(v[0].c_str(), "system") == 0) {
				system(v[1].c_str());
			}
			for (unsigned int i = 0; i < v.size(); i++) {
				cout << v[i] << endl;
			}

			if (strcmp(v[0].c_str(), "getBoard") == 0) {
				
				b.getBoard(v[1].c_str()); //debug -
				vector<Pin> pins;
				pins = b.getPins();
				string portMap;
				//JSON port Map
				portMap = "{PinHeader :[";
				for (unsigned int i = 1; i < pins.size(); i++) {
					portMap+= "{\"type\":\"" +pins[i].GetNType() + "\",\"pin\":\"" + pins[i].GetNPin() + "\",\"gpio\":\"" + pins[i].GetNGpio() + "\"},";
				}
				portMap+= "]}";
				ms.send(portMap, sock);
			} else if (strcmp(v[0].c_str(), "gpio") == 0) {
				if (v.size() >= 4) {
					if ((strcmp(v[1].c_str(), "enable") == 0) && ((strcmp(v[3].c_str(), "in") == 0) || (strcmp(v[3].c_str(), "out") == 0))) {
						ms.send("Done", sock);
					}
				}
			} else if (strcmp(v[0].c_str(), "performAct") == 0) {
				if (b.getPins().empty()) {
					ms.send("Board Not Defined", sock);
					for (unsigned int i = 0; i < v.size(); i++) {
						v.pop_back();
					}
				}
				if (v.size() >= 3) {
					if (strcmp(v[1].c_str(), "out") == 0) {
						//echo "out" > /sys/class/gpio/gpioXXX/direction
						vector<Pin> pins;
						pins = b.getPins();
						string gpio;
						for (unsigned int i = 0; i < pins.size(); i++) {
							if (strcmp(v[2].c_str(), pins[i].GetNPin().c_str()) == 0)
								gpio = pins[i].GetNGpio();
						}
						string sysReq = "echo out > /sys/class/gpio/gpio" + gpio + "/direction";
						cout << sysReq << endl;
						system(sysReq.c_str());
						//echo 1 > /sys/class/gpio/gpio4/value
						sysReq = "echo " + v[3] + " > /sys/class/gpio/gpio" + gpio + "/value";
						cout << sysReq << endl;
						system(sysReq.c_str());
					}
				}
			} else if (strcmp(v[0].c_str(), "getState") == 0) {
				if (b.getPins().empty()) {
					ms.send("Board Not Defined", sock);
					for (unsigned int i = 0; i < v.size(); i++) {
						v.pop_back();
					}
				}
				if (v.size() >= 3) {
					string gpio;
					if (strcmp(v[1].c_str(), "in") == 0) {
						vector<Pin> pins;
						pins = b.getPins();
						//Translate pinNumber to Gpio Number
						for (unsigned int i = 0; i < pins.size(); i++) {
							if (strcmp(v[2].c_str(), pins[i].GetNPin().c_str()) == 0)
								gpio = pins[i].GetNGpio();
						}

						ms.send(s.getFileText("/sys/class/gpio/gpio" + gpio + "/value"), sock);
					}
				}
			} else if (strcmp(v[0].c_str(), "module") == 0) {
				if (strcmp(v[1].c_str(), "blink") == 0) {
					Blink blink;
					int times = atoi(v[3].c_str());
					int delay = atoi(v[4].c_str());
					vector<Pin> pins;
					pins = b.getPins();
					string gpio;
					for (unsigned int i = 0; i < pins.size(); i++) {
						if (strcmp(v[2].c_str(), pins[i].GetNPin().c_str()) == 0)
							gpio = pins[i].GetNGpio();
					}
					blink.blink(gpio, times, delay);
					cout << "call Blink" << endl;
				}
			} else if (strcmp(v[0].c_str(), "spi") == 0){
				try {
					LibSpi spi;
					int ret = spi.send(v[1].c_str());
					ms.send(s.intToStr(ret).c_str(), sock);
				}catch(exception& e){
					cout <<  "err" << endl;
				}
			} else {
				ms.send("Command not reconized!", sock);
			}
		}
	}
    }
        
}

void *ThreadMain(void *clntSock){
	pthread_detach(pthread_self());
	HandleTCPClient((TCPSocket *) clntSock);
	delete (TCPSocket *) clntSock;
}
ServerSocket::~ServerSocket(){
	
}
