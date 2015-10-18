/* 
 * File:   main.cpp
 * Author: williamvolkweis
 *
 * Created on September 29, 2015, 10:03 PM
 */

#include "Socket/ServerSocket.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ServerSocket s;
    s.setPort(45455);
    s.init();
    
    return 0;
}

