#include "nixled.h"
#include "delay.h"

void NixLed()
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		switch(i)
		{
		   case(0):
				LSA=1;LSB=1;LSC=1; break;	//"0"
			case(1):
				LSA=0;LSB=1;LSC=1; break;
			case(2):
				LSA=1;LSB=0;LSC=1; break;
			case(3):	
				LSA=0;LSB=0;LSC=1; break;
			case(4):
				LSA=1;LSB=1;LSC=0; break;
			case(5):
				LSA=0;LSB=1;LSC=0; break;
			case(6):
				LSA=1;LSB=0;LSC=0; break;
			case(7):
				LSA=0;LSB=0;LSC=0; break;
		}
		P0=smg[i];
		Delay_ms(3); 
		P0=0x00;
	}
}