/* 
 * File:   Pin.h
 * Author: williamvolkweis
 *
 * Created on July 12, 2015, 9:04 PM
 */
using namespace std;
#include "strLib.h"
#ifndef PIN_H
#define	PIN_H

class Pin {
public:
    
    Pin(string nPin, string nGpio, string nType);
    
    string GetNGpio();

    string GetNPin();

    string GetNType();

private:
    
    string nGpio;
    string nPin;
    string nType;
    
};

#endif	/* PIN_H */

