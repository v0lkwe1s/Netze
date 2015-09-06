/* 
 * File:   main.cpp
 * Author: williamvolkweis
 *
 * Created on September 5, 2015, 7:46 PM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string.h>
#include <unistd.h>

#include "Blink.h"

using namespace std;

/*
* this is a modular implementation for standAlone applications,
 * TODO LIST
 * Blink module with parameters
 * * 1 - GPIO
 * * 2 - times (0 for infinite)
 * * 3 - delay (int miliseconds)
*/
int main(int argc, char** argv) {

    
        cout << "blinkinkg" << endl;
        Blink b;
        b.blink("4", 10, 1);
    
 
    
    
    return 0;
}

