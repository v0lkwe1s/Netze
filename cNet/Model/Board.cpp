/*
 * File:   board.cpp
 * Author: root
 *
 * Created on July 12, 2015, 11:23 PM
 */
#include "Board.h"
#include "HummingBoardI2Ex.h"
#include "RaspberryPi.h"
#include "IntelEdison.h"
#include "../Libraries/LibStr.h"

Board::Board()
{
}

Board::Board(const Board& orig)
{
}

Board::~Board()
{
}

//set board PinHeader

void Board::getBoard(string board)
{

	if (strcmp(board.c_str(), "Hummingboard-i2ex") == 0) {
            HummingBoardI2Ex hummingBoard;
            hummingBoard.set();
            this->setPins(hummingBoard.getPins());
	}
	//for all is the same, only instancing other boards
	if (strcmp(board.c_str(), "RaspberryPi") == 0) {
            RaspberryPi raspberry;
            raspberry.set();
            this->setPins(raspberry.getPins());
	}
        if (strcmp(board.c_str(), "IntelEdison") == 0) {
            IntelEdison edison;
            edison.set();
            this->setPins(edison.getPins());
        }
        
}
