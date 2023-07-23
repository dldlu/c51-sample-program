#ifndef _1602_H
#define _1602_H

#include "reg52.h"

#define LCD1602_DATAPINS P0
#define u8 unsigned char
#define	u16	unsigned int

void LcdWriteCom(u8 com);
void LcdWriteData(u8 dat);
void Lcd();



#endif

