/*
 * File:   intelGalileo.h
 * Author: williamvolkweis
 *
 * Created on July 19, 2015, 5:30 PM
 */

#include "../Libraries/LibStr.h"
#include "../Model/Pin.h"

using namespace std;

#ifndef INTELGALILEO_H
#define	INTELGALILEO_H

class IntelGalileo
{
public:

	IntelGalileo();
	IntelGalileo(const IntelGalileo& orig);
	virtual ~IntelGalileo();

	vector<Pin> getPins() const;

	void set();

private:
	LibStr s;
	vector<Pin> pins;
	string pin;
	string type;
	string gpio;
};

#endif	/* INTELGALILEO_H */
