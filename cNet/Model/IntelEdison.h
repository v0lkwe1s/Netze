/*
 * File:   intelEdison.h
 * Author: williamvolkweis
 *
 * Created on August 15, 2015, 8:18 PM
 */
#include "../Libraries/LibStr.h"
#include "../Model/Pin.h"


using namespace std;

#ifndef INTELEDISON_H
#define	INTELEDISON_H

class IntelEdison{
public:
	IntelEdison();
	IntelEdison(const IntelEdison& orig);
	virtual ~IntelEdison();

	void set();

	vector<Pin> getPins() const;

private:
	LibStr s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
        string linuxPin;
        string pinMux;
        string outputGpio;
        string pullUp;
};

#endif	/* INTELEDISON_H */
