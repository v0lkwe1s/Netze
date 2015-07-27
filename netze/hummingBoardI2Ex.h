/* 
 * File:   hummingBoardI2Ex.h
 * Author: williamvolkweis
 *
 * Created on July 5, 2015, 8:48 PM
 */
#include "strLib.h"
#include "Pin.h"

using namespace std;

#ifndef HUMMINGBOARDI2EX_H
#define	HUMMINGBOARDI2EX_H

class hummingBoardI2Ex {
public:
	vector<Pin> getPins() const;

	void set();

	hummingBoardI2Ex();

private:
	strLib s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* HUMMINGBOARDI2EX_H */
