/* 
 * File:   strLib.h
 * Author: williamvolkweis
 *
 * Created on July 4, 2015, 11:46 PM
 */
#include <stdio.h>

#include <vector>

#include <string.h>

#include <sstream>

#include <stdlib.h>

#include "mSocket.h"

#include <cstdlib>

#include <iostream>

#include <ncurses.h>

using namespace std;

#ifndef STRLIB_H
#define	STRLIB_H

class strLib {
public:
	strLib();
	strLib(const strLib& orig);
	virtual ~strLib();

	void sout(string str);

	void split(const string& s, char c, vector<string>& v);

	void newClient(TCPSocket *sock);

	string intToStr(int i);
	string getFileText(string file);
	
private:

};

#endif	/* STRLIB_H */

