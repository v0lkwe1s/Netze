/* 
 * File:   strLib.cpp
 * Author: williamvolkweis
 * 
 * Created on July 4, 2015, 11:46 PM
 */

#include "strLib.h"

strLib::strLib() {
}

strLib::strLib(const strLib& orig) {
}

strLib::~strLib() {
}

void strLib::sout(string str) {
    cout << str << endl;
}

//only print client properties, not necessary

void strLib::newClient(TCPSocket* sock) {
    sout("New client! \n");
    sout("Ip Address: " + sock->getForeignAddress());
    cout << "Port " << sock->getForeignPort() << endl;
}

//like vb.net split

void strLib::split(const string& s, char c, vector<string>& v) {
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

string strLib::intToStr(int i) {
    stringstream ss;
    ss << i;
    string str = ss.str();
    return str;
}
