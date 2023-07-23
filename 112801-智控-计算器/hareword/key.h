#ifndef KEY_H
#define KEY_H

#include "reg52.h"

sbit P10 = P1^0;
sbit P11 = P1^1;
sbit P12 = P1^2;
sbit P13 = P1^3;
sbit P14 = P1^4;
sbit P15 = P1^5;
sbit P16 = P1^6;
sbit P17 = P1^7;
sbit P30 = P3^0;
sbit P31 = P3^1;
sbit P32 = P3^2;
sbit P33 = P3^3;

extern unsigned char num1;
extern unsigned char num2;
extern unsigned char ch1;
extern unsigned char ch2;
extern unsigned char sum;

void Key_1();
void Key_ch();
void Key_2();
void Add();


#endif