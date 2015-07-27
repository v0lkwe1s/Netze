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
        hummingBoardI2Ex hummingBoard;
        hummingBoard.set();
        this->setPins(hummingBoard.getPins());
    }
    //for all is the same, only instancing other boards
    if (strcmp(board.c_str(), "RaspberryPi") == 0) {
        RaspberryPi raspberry;
        raspberry.set();
        this->setPins(raspberry.getPins());
    }
}


