#include <reg52.h>
#include <intrins.h>
typedef unsigned int u16;
typedef unsigned char u8;

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;

u8 KeyValue;

void delay100ms()
{
	unsigned char i, j;
	i = 180;
	j = 73;
	do
	{
		while (--j);
	} while (--i);
}


void Key_Down()
{
	P1 = 0x7f;
	if(P1 != 0x7f) 
	{
		delay100ms();
		if(P1 != 0x7f)
		{
			if(P1 == 0x77)
				KeyValue = 1;
			else if(P1 == 0x7b)
				KeyValue = 2;
			else if(P1 == 0x7d)
				KeyValue = 3;
			else if(P1 == 0x7e)
				KeyValue = 4;
			else
				KeyValue = 0;
		}while(P1 != 0x7f);			
	}		
}

void main()
{
	while(1)
	{
		Key_Down();
		switch(KeyValue)
		{				   
			case(1): LED1 = ~LED1; break;
			case(2): LED2 = ~LED2; break;
			case(3): LED3 = ~LED3; break;
			case(4): LED4 = ~LED4; break;	
		}	
	}
}