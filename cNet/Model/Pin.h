/*
 * File:   Pin.h
 * Author: williamvolkweis
 *
 * Created on July 12, 2015, 9:04 PM
 */


using namespace std;
#include "../Libraries/LibStr.h"
#ifndef PIN_H
#define	PIN_H



class Pin
{
public:
	//pinNumber, GpioNumber, GpioType
	Pin(string nPin, string nGpio, string nType);
	//pinNumber, GpioNumber, GpioType, PinMux, OutPutGpio, PullUp
	Pin(string pin, string gpio, string type, string pinMux, string outputGpio, string pullUp);

	string GetNGpio();

	string GetNPin();

	string GetNType();
	string GetOutputGpio() const;

	void SetOutputGpio(string outputGpio);

	string GetPinMux() const;

	void SetPinMux(string pinMux);

	string GetPullUp() const;

	void SetPullUp(string pullUp);

private:

	string nGpio;
	string nPin;
	string nType;
	string pinMux;
	string outputGpio;
	string pullUp;
	
};

#endif	/* PIN_H */
