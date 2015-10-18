/*
 * File:   RaspberryPi.h
 * Author: williamvolkweis
 *
 * Created on July 13, 2015, 6:55 PM
 */

#ifndef RASPBERRYPI_H
#define	RASPBERRYPI_H

using namespace std;

#include "../Libraries/LibStr.h"
#include "../Model/Pin.h"

class RaspberryPi
{
public:

	vector<Pin> getPins() const;

	void set();


	RaspberryPi();

private:
	LibStr s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* RASPBERRYPI_H */
