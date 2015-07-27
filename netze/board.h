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

	vector<Pin> getPins() const
	{
		return pins;
	}

	void setPins(vector<Pin> pins)
	{
		this->pins = pins;
	}

private:
	vector<Pin> pins;

};

#endif	/* BOARD_H */

