#ifndef _1602_H
#define _1602_H

#include "reg52.h"

#define LCD1602_DATAPINS P0

void LcdWriteCom(unsigned char com);
void LcdWriteData(unsigned char dat);
void LcdInit();

sbit LCD1602_RS = P2^6;
sbit LCD1602_RW = P2^5;
sbit LCD1602_E  = P2^7;

#endif

