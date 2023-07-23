#include "1602.h"
#include "delay.h"

void LcdWriteCom(unsigned char com)
{
	LCD1602_RS = 0;
	LCD1602_RW = 0;
	
	LCD1602_DATAPINS = com;
	Delay_ms(1);

	LCD1602_E = 1;	 
	Delay_ms(5);
	LCD1602_E = 0;

	LCD1602_DATAPINS = com << 4;
	Delay_ms(1);

	LCD1602_E = 1;	 
	Delay_ms(5);
	LCD1602_E = 0;
}

void LcdWriteData(unsigned char dat)
{
	LCD1602_E = 0;
	LCD1602_RS = 1;
	LCD1602_RW = 0;

	LCD1602_DATAPINS = dat; 
	Delay_ms(1);

	LCD1602_E = 1;  
	Delay_ms(5);  
	LCD1602_E = 0;

	LCD1602_DATAPINS = dat << 4;
	Delay_ms(1);

	LCD1602_E = 1;	 
	Delay_ms(5);
	LCD1602_E = 0;
}

void LcdInit()
{
	LcdWriteCom(0x80);
	LcdWriteCom(0x32);	
	LcdWriteCom(0x28);
	LcdWriteCom(0x0c);
	LcdWriteCom(0x06);
	LcdWriteCom(0x01); 	
}