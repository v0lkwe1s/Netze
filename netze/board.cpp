/* 
 * File:   board.cpp
 * Author: root
 * 
 * Created on July 12, 2015, 11:23 PM
 */

#include "board.h"

board::board() {
}

board::board(const board& orig) {
}

board::~board() {
}

//set board PinHeader
void board::getBoard(string board) {
    
    if (strcmp(board.c_str(), "hummingboard-i2ex") == 0) {
        //create instance of Hummingboard class
        hummingBoardI2Ex hummingBoard;
        hummingBoard.set();
        
        //create a vector of class Pin 
        vector<Pin> pins;
        //get board pins
        pins = hummingBoard.getPins();

        //print in console pins with respective types
        for (int i = 0; i < pins.size(); i++) {
            cout << "GPIO " << pins[i].GetNGpio() << "\t";
            cout << "PinHeader " << pins[i].GetNPin() << "\t";
            cout << "PinType " << pins[i].GetNType() << endl;
        }
    }
    //for all is the same, only instancing other boards
    if (strcmp(board.c_str(), "RaspberryPi") == 0) {

        RaspberryPi raspberry;
        raspberry.set();

        vector<Pin> pins;

        pins = raspberry.getPins();

        for (int i = 0; i < pins.size(); i++) {
            cout << "GPIO " << pins[i].GetNGpio() << "\t";
            cout << "PinHeader " << pins[i].GetNPin() << "\t";
            cout << "PinType " << pins[i].GetNType() << endl;
        }
    }
}


