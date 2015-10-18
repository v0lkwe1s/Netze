/* 
 * File:   Spi.h
 * Author: williamvolkweis
 *
 * Created on October 15, 2015, 5:26 PM
 */

#ifndef SPI_H
#define	SPI_H
using namespace std;

#include "../Libraries/LibStr.h"
#include "../Libraries/LibSpi.h"


class Spi {
public:
	Spi();
	Spi(const Spi& orig);
	virtual ~Spi();
	void send(string com, TCPSocket *sock);
private:

	LibSocket ms;
	LibStr s;
	
};

#endif	/* SPI_H */

