#include "reg52.h"
#include "delay.h"
#include "1602.h"

void LcdWriteCom(u8 com)
{
	LCD1602_RS = 0;
	LCD1602_RW = 0;
	
	LCD1602_DATAPINS = com;
	delay_ns(1);

	LCD1602_E = 1;	 
	delay_ns(5);
	LCD1602_E = 0;

	LCD1602_DATAPINS = com << 4;
	delay_ns(1);

	LCD1602_E = 1;	 
	delay_ns(5);
	LCD1602_E = 0;
}

void LcdWriteData(u8 dat)
{
	LCD1602_E = 0;
	LCD1602_RS = 1;
	LCD1602_RW = 0;

	LCD1602_DATAPINS = dat; 
	delay_ns(1);

	LCD1602_E = 1;  
	delay_ns(5);  
	LCD1602_E = 0;

	LCD1602_DATAPINS = dat << 4;
	delay_ns(1);

	LCD1602_E = 1;	 
	delay_ns(5);
	LCD1602_E = 0;
}

void Lcd()
{
	LcdWriteCom(0x32);	
	LcdWriteCom(0x28);
	LcdWriteCom(0x0c);
	LcdWriteCom(0x06);
	LcdWriteCom(0x01); 	
}