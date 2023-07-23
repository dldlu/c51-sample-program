#include "led.h"
#include "delay.h"

u8 n;

void WaterLed()
{
	P2 = 0xfe;	
	for(n = 0; n < 8; n++)
	{
		P2 = _cror_(P2,1);
		delay_ms(500);
	}
}