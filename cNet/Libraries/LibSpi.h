#ifndef LIBSPI_H
#define LIBSPI_H

#include "../Libraries/LibStr.h"
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#define ADDRESS 0x04

//Deixar dinamico o troço


using namespace std;


class LibSpi
{
public:
	LibSpi();
	~LibSpi();
	int send(const char * comm);


};

#endif // LIBSPI_H
