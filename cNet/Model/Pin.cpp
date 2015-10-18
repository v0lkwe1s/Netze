/*
 * File:   Pin.cpp
 * Author: williamvolkweis
 *
 * Created on July 12, 2015, 9:04 PM
 */
using namespace std;

#include "Pin.h"
#include "string.h"

//RaspberryPi, HummingBoard
Pin::Pin(string pin, string gpio, string type){
	this->nGpio = gpio;
	this->nPin = pin;
	this->nType = type;

	if (strcmp(type.c_str(), "GPIO") == 0) {
		string sysExport;
		sysExport = "echo " + nGpio + " > /sys/class/gpio/export";
		system(sysExport.c_str());
	}
}
//for Intel Edison
Pin::Pin(string pin, string gpio, string type, string pinMux, string outputGpio, string pullUp){
	this->nGpio = gpio;
	this->nPin = pin;
	this->nType = type;
        
	if (strcmp(type.c_str(), "GPIO") == 0) {
		cout << "Exporting GPIO for edison\t";
		string sysExport;
		sysExport = "echo " + nGpio + " > /sys/class/gpio/export";
		system(sysExport.c_str());
	}
}

string Pin::GetOutputGpio() const {
    return outputGpio;
}

void Pin::SetPinMux(string pinMux) {
    this->pinMux = pinMux;
}

void Pin::SetOutputGpio(string outputGpio) {
    this->outputGpio = outputGpio;
}

string Pin::GetPullUp() const {
    return pullUp;
}


string Pin::GetPinMux() const {
    return pinMux;
}


string Pin::GetNType()
{
	return nType;
}

string Pin::GetNPin()
{
	return nPin;
}

string Pin::GetNGpio()
{
	return nGpio;
}

void Pin::SetPullUp(string pullUp) {
    this->pullUp = pullUp;
}

