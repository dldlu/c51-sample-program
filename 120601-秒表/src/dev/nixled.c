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
		Delay_ms(1); 
		P0=0x00;
	}
}

void GetTime()
{
	nixtime[0] = smg[min / 10];
	nixtime[1] = smg[min % 10];
	nixtime[2] = 0x40;
	nixtime[3] = smg[sec / 10];
	nixtime[4] = smg[sec % 10];
	nixtime[5] = 0x40;
	nixtime[6] = smg[ssec / 10];
	nixtime[7] = smg[ssec % 10];
}