/* 
 * File:   intelGalileo.h
 * Author: williamvolkweis
 *
 * Created on July 19, 2015, 5:30 PM
 */
#include "strLib.h"
#include "Pin.h"

#ifndef INTELGALILEO_H
#define	INTELGALILEO_H

class intelGalileo {
public:
	vector<Pin> getPins() const;
	void set();
	intelGalileo();
	intelGalileo(const intelGalileo& orig);
	virtual ~intelGalileo();
private:
	strLib s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* INTELGALILEO_H */

