#include "hc595send.h"
#include "intrins.h"

void HcSend(unsigned char dat)
{
	unsigned char i;

	SRCLK = 1;
	RCLK = 1;

	for(i=0;i<8;i++)
	{
		SER = dat >> 7;	
		dat <<= 1;

		SRCLK = 0;
		_nop_();
		_nop_();
		SRCLK = 1;	
	}
	RCLK = 0;
	_nop_();
	_nop_();
	RCLK = 1;
}