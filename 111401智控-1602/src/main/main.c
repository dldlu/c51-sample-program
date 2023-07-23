#include "reg52.h"
#include "intrins.h"
#include "delay.h"
#include "1602.h"

u8 dat1[] = "LiZhongnan!";
void main()
{
	u8 i;

	Lcd();
	LcdWriteCom(0x80);	  
	for(i=0;i<11;i++)
	{
		LcdWriteData(dat1[i]);	          
	}
//	LcdWriteCom(0xc0);
//	for(i=0;i<8;i++)
//	{
//		LcdWriteData(dat2[i]);	
//	}
	while(1);
}