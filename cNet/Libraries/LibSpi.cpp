#include "LibSpi.h"

using namespace std;

LibSpi::LibSpi()
{
}
int LibSpi::send(const char * comm){
    const char *devName = "/dev/i2c-6";
    int file;
    if ((file = open(devName, O_RDWR)) < 0) {
        fprintf(stderr, "I2C: Failed to access %d\n", devName);
	}
    if (ioctl(file, I2C_SLAVE, ADDRESS) < 0) {
        fprintf(stderr, "I2C: Failed to acquire bus access/talk to slave 0x%x\n", ADDRESS);
    }
    int arg;
    int ret;
    int val;
    unsigned char cmd[16];
    
    if (0 == sscanf(comm, "%d", &val)) {
        fprintf(stderr, "Invalid parameter %d \"%s\"\n", arg, comm);
    }
    printf("Sending %d\n", val);
 
    cmd[0] = val;
    if (write(file, cmd, 1) == 1) {
        usleep(10000);
        char buf[1];
	if (read(file, buf, 1) == 1) {
            ret = (int) buf[0];
	}
    }
    
    usleep(100);
    close(file);
    return ret;
}
LibSpi::~LibSpi()
{
}
