/* 
 * File:   intelEdison.h
 * Author: williamvolkweis
 *
 * Created on August 15, 2015, 8:18 PM
 */

#ifndef INTELEDISON_H
#define	INTELEDISON_H

using namespace std;

#include "strLib.h"
#include "Pin.h"

class intelEdison {
public:
	intelEdison();
	intelEdison(const intelEdison& orig);
	virtual ~intelEdison();
	
void set();

vector<Pin> getPins() const;
	
private:
	strLib s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* INTELEDISON_H */

