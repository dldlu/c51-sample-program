#include "nixled.h"
#include "delay.h"

unsigned char i;
unsigned char nix[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
					0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
unsigned char time[2];

void NixLed()
{
	
	for(i = 0; i < 2; i++)
	{
		switch(i)
		{
			case(0):
			LSA=1;LSB=1;LSC=1; break;
			case(1):
			LSA=0;LSB=1;LSC=1; break;
		}
		P0 = time[i];
		Delay_ms(1);
		P0 = 0x00;
		}
}

void GetTime()
{
	time[0] = nix[sec/10];
	time[1] = nix[sec%10];
}