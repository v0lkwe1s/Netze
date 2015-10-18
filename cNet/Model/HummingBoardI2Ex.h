/*
 * File:   hummingBoardI2Ex.h
 * Author: williamvolkweis
 *
 * Created on July 5, 2015, 8:48 PM
 */
#include "../Libraries/LibStr.h"
#include "../Model/Pin.h"

using namespace std;

#ifndef HUMMINGBOARDI2EX_H
#define	HUMMINGBOARDI2EX_H

class HummingBoardI2Ex
{
public:
	vector<Pin> getPins() const;

	void set();

	HummingBoardI2Ex();

private:
	LibStr s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* HUMMINGBOARDI2EX_H */
