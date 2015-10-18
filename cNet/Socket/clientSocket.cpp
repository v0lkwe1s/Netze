/*
 * File:   clientSocket.cpp
 * Author: williamvolkweis
 *
 * Created on June 21, 2015, 4:56 PM
 */

#include "clientSocket.h"

clientSocket::clientSocket()
{
}

clientSocket::clientSocket(const clientSocket& orig)
{
}

clientSocket::~clientSocket()
{
}
//this class needs implementation

void clientSocket::setPort(int port)
{

	this-> port = port;

}

void clientSocket::setAddress(string address)
{

	this->address = address;

}

void clientSocket::send(char* msg)
{

	this->msg = msg;

}

void clientSocket::init()
{
	const int RCVBUFSIZE = 256; // Size of receive buffer

	cout << "Conecting on server as: " << getAddress() << " on port: " << getPort() << endl;

	string servAddress = getAddress();

	char *echoString = getSend();

	int echoStringLen = strlen(echoString); // Determine input length

	unsigned short echoServPort = getPort();

	try {
		// Establish connection with the echo server
		TCPSocket sock(servAddress, echoServPort);

		// Send the string to the echo server
		sock.send(echoString, echoStringLen);

		char echoBuffer[RCVBUFSIZE + 1]; // Buffer for echo string + \0

		int bytesReceived = 0; // Bytes read on each recv()

		int totalBytesReceived = 0; // Total bytes read

		// Receive the same string back from the server
		cout << "Received: "; // Setup to print the echoed string

		while (totalBytesReceived < echoStringLen) {

			// Receive up to the buffer size bytes from the sender

			if ((bytesReceived = (sock.recv(echoBuffer, RCVBUFSIZE))) <= 0) {

				cerr << "Unable to read";

				exit(1);

			}

			totalBytesReceived += bytesReceived; // Keep tally of total bytes

			echoBuffer[bytesReceived] = '\0'; // Terminate the string!

			cout << echoBuffer; // Print the echo buffer

		}

		cout << endl;

		// Destructor closes the socket

	} catch (SocketException &e) {

		cerr << e.what() << endl;

		exit(1);

	}

}

char* clientSocket::getSend()
{

	return this -> msg;

}

int clientSocket::getPort()
{

	return this->port;

}

string clientSocket::getAddress()
{

	return this->address;

}
