#include "reg52.h"
#define LCD1602_DATAPINS P0

void LcdWriteCom(u8 com);
void LcdWriteData(u8 dat);
void Lcd();

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
sbit LCD1602_E = P2^7;

