#include "stdio.h"
#include "unistd.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "stdlib.h"
#include "string.h"

#define LEDOFF 1
#define LEDON  0

char *led_on = "on";
char *led_off= "off";

int main(int argc, char* argv[])
{
    int fd;
    int ret;
    char* filename;
    unsigned char databuf[1] = {0};

    if(argc != 3) {
        printf("Usage: ledAPP [device] paramenter [on or off] \n");
        printf("example: ledAPP /dev/led-Blue on \r\n");
	return -1;
    }

    filename = argv[1];
    fd = open(filename, O_RDWR);
    if(fd < 0) {
        printf("file %s open failed\r\n", filename);
	return -1;
    }

    if (strcmp(led_on, argv[2]) == 0)
    {
        databuf[0] = LEDON;
    } 
    else if (strcmp(led_off, argv[2]) == 0){
        databuf[0] = LEDOFF;
    }
    else {
        printf("Error Usage: The paramenter noncompliance\r\n");
        close(fd);
        return 0;
    }

    ret = write(fd, databuf, sizeof(databuf));
    if(ret < 0) {
        printf("LED control failed!\r\n");
	close(fd);
	return -1;
    }

    ret = close(fd);
    if(ret < 0) {
        printf("file %s close failed\r\n", filename);
	return -1;
    }

    return 0;
}
