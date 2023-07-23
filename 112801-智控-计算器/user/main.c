#include "reg52.h"
#include "key.h"
#include "nixled.h"
#include "1602.h"

#define LED P2

void main()
{

	Lcd();

	Key_1();
	NixLed1();

	Key_ch();
	Key_2();
	NixLed2();

	Add();

	LcdWriteCom(0x80);	  
	LcdWriteData((sum)/10+48);
	LcdWriteData((sum)%10+48);
	LED = sum;

	while(1);
			
}