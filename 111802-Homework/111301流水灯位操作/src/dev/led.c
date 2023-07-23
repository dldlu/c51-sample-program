#include <reg52.h>
#include <delay.h>
#include <led.h>
#include <intrins.h>

int i;

void WaterLed()
{
	P2 = 0xfe;	
	for(i = 0; i < 8; i++)
	{
		P2 = _cror_(P2,1);
		delay(10000);
	}
}