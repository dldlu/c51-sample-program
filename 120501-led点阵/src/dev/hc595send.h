#ifndef HC595SEND_H
#define HC595SEND_H

#include "reg51.h"

sbit SRCLK=P3^6;
sbit RCLK=P3^5;
sbit SER=P3^4;

void HcSend(unsigned char dat);

#endif