#include "hc595send.h"
#include "delay.h"

unsigned char ledduan[] = {0x00,0x0c,0x54,0x64,0xdf,0x44,0x44,0x00};
unsigned char ledwei[] =  {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe}; 

void main()
{
	unsigned char i;
	while(1)
	{
		P0 = 0x7f;
		for(i=0;i<8;i++)
		{
			P0 = ledwei[i];
			HcSend(ledduan[i]);
			Delay_ms(1); 
			HcSend(0x00);
		}
	}
	
}