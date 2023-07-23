#ifndef NIXLED_H
#define NIXLED_H

#include "reg52.h"

void NixLed();
void GetTime();

sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;

extern unsigned char sec;

#endif