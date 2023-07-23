#include <reg52.h>
#include <intrins.h>

sbit P17=P1^7;
sbit P16=P1^6;
sbit P13=P1^3;
sbit P12=P1^2;
sbit P11=P1^1;
sbit P10=P1^0;

sbit D1=P2^0;
sbit D2=P2^1;
sbit D3=P2^2;
sbit D4=P2^3;
sbit D5=P2^4;
sbit D6=P2^5;
sbit D7=P2^6;
sbit D8=P2^7;
	 
void Delay10ms()		//@11.0592MHz
{
	unsigned char i, j;

	i = 234;
	j = 19;
	do
	{
		while (--j);
	} while (--i);
}


void main()
{
 	while(1)
	{
 		P17=1;P16=1;P13=1;P12=1;

		P13=0;
		if(P17==0)
		{
			Delay10ms();
 			if(P17==0)	 
 			D1=~D1;
		}
		if(P16==0)
		{
			Delay10ms();
  			if(P16==0)
 			D5=~D5;
		}
		P13=1;

		P12=0;
 		if(P17==0)
		{
 			Delay10ms();
 			if(P17==0)
 			D2=~D2; 
		}
		if(P16==0)
		{
  			Delay10ms();
  			if(P16==0)
			D6=~D6;
		}
 		P12=1;

		P11=0;
		if(P17==0)
		{
 			Delay10ms();
 			if(P17==0)
 			D3=~D3; 
		}
		if(P16==0)
		{
  			Delay10ms();
  			if(P16==0)
			D7=~D7;
		}
		P11=1;

		P10=0;
		if(P17==0)
		{
 			Delay10ms();
 			if(P17==0)
 			D4=~D4; 
		}
		if(P16==0)
		{
  			Delay10ms();
  			if(P16==0)
			D8=~D8;
		}
		P10=1;
		
	}
}