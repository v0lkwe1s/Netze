/* 
 * File:   intelGalileo.h
 * Author: williamvolkweis
 *
 * Created on July 19, 2015, 5:30 PM
 */



#ifndef INTELGALILEO_H
#define	INTELGALILEO_H

using namespace std;


#include "strLib.h"
#include "Pin.h"


class intelGalileo {
public:
	
	intelGalileo();
	intelGalileo(const intelGalileo& orig);
	virtual ~intelGalileo();
	
	vector<Pin> getPins() const;

void set();
	
private:
	strLib s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* INTELGALILEO_H */

