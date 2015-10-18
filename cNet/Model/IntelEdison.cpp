/*
 * File:   intelEdison.cpp
 * Author: williamvolkweis
 *
 * Created on August 15, 2015, 8:18 PM
 */

#include "IntelEdison.h"

IntelEdison::IntelEdison()
{
}

IntelEdison::IntelEdison(const IntelEdison& orig)
{
}

IntelEdison::~IntelEdison()
{
}

vector<Pin> IntelEdison::getPins() const
{
	return pins;

}

void IntelEdison::set()
{
	for (int i = 0; i <= 26; i++) {
		switch (i) {
                case 0:
			type = "UART";
			gpio = "130";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "UART";
                        outputGpio = "248";
                        pullUp = "216";
			break;
		case 1:
			type = "UART";
			gpio = "131";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "UART";
                        outputGpio = "249";
                        pullUp = "217";
			break;
		case 2:
			type = "GPIO";
			gpio = "128";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "GPIO";
                        outputGpio = "250";
                        pullUp = "218";
			break;
		case 3:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 4:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 5:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 6:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 7:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 8:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 9:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 10:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 11:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 12:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 13:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 14:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 15:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 16:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 17:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 18:
                        type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 19:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 20:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 21:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 22:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 23:
                        type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 24:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 25:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		case 26:
			type = "GPIO";
			gpio = "12";
			pin = s.intToStr(i);
                        linuxPin = "0";
                        pinMux = "null";
                        outputGpio = "251";
                        pullUp = "219";
			break;
		}
		pins.push_back(Pin(pin, gpio, type, pinMux, outputGpio, pullUp));
	}
}
