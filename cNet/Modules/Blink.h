/*
 * File:   Blink.h
 * Author: williamvolkweis
 *
 * Created on September 5, 2015, 9:37 PM
 */

#ifndef BLINK_H
#define	BLINK_H
#include "../Libraries/LibStr.h"
#include <unistd.h>
using namespace std;

class Blink
{
public:
	Blink();
	void blink(string gpio, int times, int delay);

	Blink(const Blink& orig);
	virtual ~Blink();

private:
	LibStr s;
};

#endif	/* BLINK_H */
