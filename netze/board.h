/* 
 * File:   board.h
 * Author: root
 *
 * Created on July 12, 2015, 11:23 PM
 */

#ifndef BOARD_H
#define	BOARD_H


#include "strLib.h"
#include <vector>
#include "Pin.h"

#include "RaspberryPi.h"

#include "hummingBoardI2Ex.h"

class board {
public:
    board();
    board(const board& orig);
    virtual ~board();
    
    void getBoard(string board);
    
private:

};

#endif	/* BOARD_H */

