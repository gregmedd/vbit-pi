#ifndef _VBIT_H_
#define _VBIT_H_

// System
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>
#include <time.h>

#include <sys/socket.h> /* for socket(), bind(), and connect() */
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdint.h>

// Library
#include <wiringPi.h>

// Application
#include "i2c.h"
#include "fifo.h"
#include "pins.h"
#include "FILLFifo.h"
#include "packet.h"
#include "stream.h"
#include "mag.h"

#endif