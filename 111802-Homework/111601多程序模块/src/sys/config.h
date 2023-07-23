#include "reg52.h"
#include "intrins.h"

#define LCD1602_DATAPINS P0
#define u16 unsigned int
#define u8 unsigned char

sbit k1 = P1^5;
sbit k2 = P1^4;
sbit k3 = P1^3;
sbit k4 = P1^2;

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;

sbit D0 = P0^0;
sbit D1 = P0^1;
sbit D2 = P0^2;
sbit D3 = P0^3;
sbit D4 = P0^4;
sbit D5 = P0^5;
sbit D6 = P0^6;
sbit D7 = P0^7;

sbit LCD1602_RS = P2^6;
sbit LCD1602_RW = P2^5;
sbit LCD1602_E  = P2^7;

