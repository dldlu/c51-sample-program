#include "nixled.h"
#include "delay.h"

void NixLed()
{
	unsigned char code smgduan[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d};
	LSA=1;LSB=1;LSC=1;

	if(D5==0&&D6==0&&D7==0)
	{
		P0=smgduan[6];
		
	}
	else if(D5!=0&&D6==0&&D7==0)
	{
		 P0=smgduan[5];
		 
	}
	else if(D5==0&&D6!=0&&D7==0)
	{
		P0=smgduan[4];
		
	}
	else if(D5==0&&D6==0&&D7!=0)
	{
		P0=smgduan[3];
		
	}
	else if(D5!=0&&D6!=0&&D7==0)
	{
		P0=smgduan[3];
		
	}
	else if(D5==0&&D6!=0&&D7!=0)
	{
		P0=smgduan[1];
		
	}
	else if(D5!=0&&D6==0&&D7!=0)
	{
		P0=smgduan[2];
		
	}
	else if(D5!=0&&D6!=0&&D7!=0)
	{
		P0=smgduan[0];
		
	}
}