#ifndef NIXLED_H
#define NIXLED_H

#include "reg52.h"
#include "key.h"

sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;

void NixLed1();
void NixLed2();

#endif