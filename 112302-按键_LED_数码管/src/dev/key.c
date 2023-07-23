#include "key.h"
#include "delay.h"
#include "nixled.h"

void key()
{
 	P17=0;P12=1;P13=1;
	P17=0;
	if(P13==0)
	{
		Delay_ms(100);
		if(P13==0)
 		D5=~D5;
	}

 	if(P12==0)
	{
 		Delay_ms(100);
		if(P12==0)
 		D6=~D6; 
	}

	if(P11==0)
	{
 		Delay_ms(100);
		if(P11==0)
 		D7=~D7; 
	}

	if(P10==0)
	{
 		Delay_ms(100);
		if(P10==0)
		NixLed();
	}
	P17=1;
}