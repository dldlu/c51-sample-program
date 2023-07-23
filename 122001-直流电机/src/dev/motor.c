#include "motor.h"
#include "delay.h"

void MotorOn5s()
{
	unsigned char i;
	motor = 0;
	for(i = 0; i < 100; i++)
	{
		motor = 1;
		Delay_ms(10);
	}
	motor = 0;
	
}