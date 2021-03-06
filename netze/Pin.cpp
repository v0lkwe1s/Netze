/* 
 * File:   Pin.cpp
 * Author: williamvolkweis
 * 
 * Created on July 12, 2015, 9:04 PM
 */

#include "Pin.h"

Pin::Pin(string pin, string gpio, string type) {
    this->nGpio = gpio;
    this->nPin = pin;
    this->nType = type;

    if (strcmp(type.c_str(), "GPIO") == 0) {
        cout << "Exporting GPIO \t";
        string sysExport;
        sysExport = "echo " + nGpio + " > /sys/class/gpio/export";
        cout << sysExport << endl;
        system(sysExport.c_str());
    }
}

string Pin::GetNType() {
    return nType;
}

string Pin::GetNPin() {
    return nPin;
}

string Pin::GetNGpio() {
    return nGpio;
}





