#include "nixled.h"
#include "delay.h"

void NixLed()
{
	u8 i;

	for(i = 0; i < 6; i++)	 				//"ÏÔÊ¾7126354"
	{
		switch(i)
		{
			case(0):
			LSA=1;LSB=1;LSC=1; break;
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
		P0 = nix[i];
		delay_ms(2);
		P0 = 0x00;
		}
}