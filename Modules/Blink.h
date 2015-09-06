/* 
 * File:   Blink.h
 * Author: williamvolkweis
 *
 * Created on September 5, 2015, 9:37 PM
 */

#ifndef BLINK_H
#define	BLINK_H
#include "../netze/strLib.h"
 #include <unistd.h>
using namespace std;

class Blink {
public:
	Blink();
	void blink(string gpio, int times, int delay) {
		string sysReq = "echo out > /sys/class/gpio/gpio" + gpio + "/direction";
		cout << sysReq << endl;
		system(sysReq.c_str());
		//echo 1 > /sys/class/gpio/gpio4/value

		int i = 0;
		int v = 0;
		while (i <= times) {
			v == 0 ? v = 1 : v = 0;
			sysReq = "echo " + s.intToStr(v) + " > /sys/class/gpio/gpio" + gpio + "/value";
			cout << sysReq << endl;
			system(sysReq.c_str());
			sleep(delay);
		}
		cout << "end" << endl;
	}
	
	Blink(const Blink& orig);
	virtual ~Blink();

private:
	strLib s;
};

#endif	/* BLINK_H */

