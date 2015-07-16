/* 
 * File:   main.cpp
 * Author: williamvolkweis
 *
 * Created on July 12, 2015, 4:04 PM
 */

#include <cstdlib>
#include <vector>
#include "strLib.h"
#include "Pin.h"
#include "hummingBoardI2Ex.h"
#include "board.h"
#include "serverSocket.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    
    board b;
    b.getBoard("RaspberryPi");
    serverSocket s;
    
    s.setPort(45455);
    s.init();
   
    
    
    return 0;
}

