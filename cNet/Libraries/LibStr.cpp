/*
 * File:   strLib.cpp
 * Author: williamvolkweis
 *
 * Created on July 4, 2015, 11:46 PM
 */

#include "LibStr.h"
#include <iostream>
#include <fstream>
LibStr::LibStr()
{
}

LibStr::LibStr(const LibStr& orig)
{
}

LibStr::~LibStr()
{
}

void LibStr::sout(string str)
{
	cout << str << endl;
}

//only print client properties, not necessary

void LibStr::newClient(TCPSocket* sock)
{
	sout("New client! \n");
	sout("Ip Address: " + sock->getForeignAddress());
	cout << "Port " << sock->getForeignPort() << endl;
}

//like vb.net split

void LibStr::split(const string& s, char c, vector<string>& v)
{
	string::size_type i = 0;
	string::size_type j = s.find(c);
	while (j != string::npos) {
		v.push_back(s.substr(i, j - i));
		i = ++j;
		j = s.find(c, j);
		if (j == string::npos) {
			v.push_back(s.substr(i, s.length()));
		}
	}
}

//convert integer to string

string LibStr::intToStr(int i)
{
	stringstream ss;
	ss << i;
	string str = ss.str();
	return str;
}

//Read file and assign text into string

string LibStr::getFileText(string file)
{
	string line;
	ifstream myfile(file.c_str());
	if (myfile.is_open()) {
		while (!myfile.eof()) {
			getline(myfile, line);
		}
		myfile.close();
	} else line = "Err";
	return line;
}

string LibStr::subString(string t, string s) {
    std::string::size_type i = t.find(s);
    if (i != std::string::npos)
        t.erase(i, s.length());
    return t;
}
