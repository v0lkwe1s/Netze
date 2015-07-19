/* 
 * File:   RaspberryPi.cpp
 * Author: williamvolkweis
 * 
 * Created on July 13, 2015, 6:55 PM
 */

#include "RaspberryPi.h"

RaspberryPi::RaspberryPi() {
}

void RaspberryPi::set() {
    for (int i = 1; i <= 26; i++) {
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
                gpio = "4";
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
                gpio = "17";
                pin = s.intToStr(i);
                break;
            case 12:
                type = "GPIO"; //pwm
                gpio = "18";
                pin = s.intToStr(i);
                break;
            case 13:
                type = "GPIO";
                gpio = "27";
                pin = s.intToStr(i);
                break;
            case 14:
                type = "GND";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 15:
                type = "GPIO";
                gpio = "22";
                pin = s.intToStr(i);
                break;
            case 16:
                type = "GPIO";
                gpio = "23";
                pin = s.intToStr(i);
                break;
            case 17:
                type = "3.3V";
                gpio = "0";
                pin = s.intToStr(i);
                break;
            case 18:
                type = "GPIO";
                gpio = "24";
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
                gpio = "25";
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

vector<Pin> RaspberryPi::getPins() const {
    return pins;
}
