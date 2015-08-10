/* 
 * File:   hummingBoardI2Ex.cpp
 * Author: williamvolkweis
 * 
 * Created on July 5, 2015, 8:48 PM
 */

#include "hummingBoardI2Ex.h"

hummingBoardI2Ex::hummingBoardI2Ex() {

}

vector<Pin> hummingBoardI2Ex::getPins() const {
    return pins;
}

void hummingBoardI2Ex::set() {
    for (int i = 0; i <= 26; i++) {
        switch (i) {
            case 1:
                type = "3.3V";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 2:
                type = "5V";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 3:
                type = "I2C";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 4:
                type = "5V";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 5:
                type = "I2C";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 6:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 7:
                type = "GPIO";
                gpio = "1";
                pin = s.intToStr(i);
                break;
            case 8:
                type = "UART";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 9:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 10:
                type = "UART";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 11:
                type = "GPIO";
                gpio = "73";
                pin = s.intToStr(i);
                break;
            case 12:
                type = "GPIO";
                gpio = "72";
                pin = s.intToStr(i);
                break;
            case 13:
                type = "GPIO";
                gpio = "71";
                pin = s.intToStr(i);
                break;
            case 14:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 15:
                type = "GPIO";
                gpio = "70";
                pin = s.intToStr(i);
                break;
            case 16:
                type = "GPIO";
                gpio = "194";
                pin = s.intToStr(i);
                break;
            case 17:
                type = "3.3V";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 18:
                type = "GPIO";
                gpio = "195";
                pin = s.intToStr(i);
                break;
            case 19:
                type = "SPI-MOSI";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 20:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 21:
                type = "SPI-MISO";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 22:
                type = "GPIO";
                gpio = "67";
                pin = s.intToStr(i);
                break;
            case 23:
                type = "SPI-CLOCK";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 24:
                type = "SPI-CS";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 25:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 26:
                type = "SPI-CS";
                gpio = "0";
                pin = s.intToStr(i);
                break;
        }
        pins.push_back(Pin(pin, gpio, type));
    }
}


