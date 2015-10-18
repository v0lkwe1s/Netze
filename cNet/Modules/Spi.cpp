/* 
 * File:   Spi.cpp
 * Author: williamvolkweis
 * 
 * Created on October 15, 2015, 5:26 PM
 */

#include "Spi.h"
using namespace std;

Spi::Spi() {
}

Spi::Spi(const Spi& orig) {
}

Spi::~Spi() {
}

void Spi::send(string com, TCPSocket* sock) {
    try {
        LibSpi spi;
        int ret = spi.send(com.c_str());
        ms.send(s.intToStr(ret).c_str(), sock);
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}


