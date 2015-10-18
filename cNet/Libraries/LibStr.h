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

#include "LibSocket.h"

#include <cstdlib>

#include <iostream>

using namespace std;

#ifndef LIBSTR_H
#define LIBSTR_H

class LibStr
{
public:
	LibStr();
	LibStr(const LibStr& orig);
	virtual ~LibStr();

	void sout(string str);

	void split(const string& s, char c, vector<string>& v);

	void newClient(TCPSocket *sock);

	string intToStr(int i);
	string getFileText(string file);

	string subString(string t, string s);
private:

};

#endif	/* LIBSTR_H */
