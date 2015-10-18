/*
 * File:   Blink.cpp
 * Author: williamvolkweis
 *
 * Created on September 5, 2015, 9:37 PM
 */

#include "Blink.h"


Blink::Blink()
{
}

Blink::Blink(const Blink& orig)
{
}

Blink::~Blink()
{
}

void Blink::blink(string gpio, int times, int delay)
{
	string sysReq = "echo out > /sys/class/gpio/gpio" + gpio + "/direction";
	cout << sysReq << endl;
	system(sysReq.c_str());
	int i = 0;
	int v = 0;
	while (i <= times) {
		v == 0 ? v = 1 : v = 0;
		sysReq = "echo " + s.intToStr(v) + " > /sys/class/gpio/gpio" + gpio + "/value";
		system(sysReq.c_str());
		usleep(delay);
		times == 0 ? i = i : i++; //loop for ever
	}
	cout << "end" << endl;
}
