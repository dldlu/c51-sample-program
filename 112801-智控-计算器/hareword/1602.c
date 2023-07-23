#include "reg52.h"
#include "delay.h"
#include "1602.h"
#include "intrins.h"

sbit LCD1602_RS = P2^6;
sbit LCD1602_RW = P2^5;
sbit LCD1602_E = P2^7;

void LcdWriteCom(u8 com)
{
	LCD1602_RS = 0;
	LCD1602_RW = 0;
	
	LCD1602_DATAPINS = com;
	Delay_ns(1);

	LCD1602_E = 1;	 
	Delay_ns(5);
	LCD1602_E = 0;

	LCD1602_DATAPINS = com << 4;
	Delay_ns(1);

	LCD1602_E = 1;	 
	Delay_ns(5);
	LCD1602_E = 0;
}

void LcdWriteData(u8 dat)
{
	LCD1602_E = 0;
	LCD1602_RS = 1;
	LCD1602_RW = 0;

	LCD1602_DATAPINS = dat; 
	Delay_ns(1);

	LCD1602_E = 1;  
	Delay_ns(5);  
	LCD1602_E = 0;

	LCD1602_DATAPINS = dat << 4;
	Delay_ns(1);

	LCD1602_E = 1;	 
	Delay_ns(5);
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