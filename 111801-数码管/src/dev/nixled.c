#include "nixled.h"
#include "delay.h"

void NixLed()
{
	u8 i;
	LSA = 0; LSB = 0; LSC = 0; 				//"最后一位显示7"
	P0 = nix[0];
//	for(i = 0; i < 7; i++)	 				//"显示7126354"
//	{
//		switch(i)
//		{
//			case(0):
//			LSA=1;LSB=1;LSC=1; break;
//			case(1):
//			LSA=0;LSB=1;LSC=1; break;
//			case(2):
//			LSA=1;LSB=0;LSC=1; break;
//			case(3):	
//			LSA=0;LSB=0;LSC=1; break;
//			case(4):
//			LSA=1;LSB=1;LSC=0; break;
//			case(5):
//			LSA=0;LSB=1;LSC=0; break;
//			case(6):
//			LSA=1;LSB=0;LSC=0; break;
//			case(7):
//			LSA=0;LSB=0;LSC=0; break;
//		}
//		P0 = nix[i];
//		delay_ms(3);
//		P0 = 0x00;
//		}
}