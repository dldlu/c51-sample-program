#include "key.h"
#include "delay.h"

unsigned char num1=0;
unsigned char num2=0;
unsigned char ch1=0;
unsigned char ch2=0;
unsigned char sum=0;

void Key_1()
{
	num1 = 0;
	while(num1 == 0){
		P17=1;P16=1;P15=1;P14=1;
		P13=1;P12=1;P11=1;P10=1;

		P16=0;
		if(P13==0)
		{					 
			Delay_ms(10);
 			if(P13==0)	 
 			num1 = 7;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num1 = 8;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num1 = 9;
		}
		P16=1;

		P15=0;
		if(P13==0)
		{
			Delay_ms(10);
 			if(P13==0)	 
 			num1 = 4;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num1 = 5;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num1 = 6;
		}
		P15=1;

		P14=0;
		if(P13==0)
		{
			Delay_ms(10);
 			if(P13==0)	 
 			num1 = 1;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num1 = 2;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num1 = 3;
		}
		P14=1;

		P17=1;P16=1;P15=1;P14=1;
		P13=1;P12=1;P11=1;P10=1;
	}
	
}

void Key_ch()
{
	ch1 = 0;
	while(ch1 == 0){
		if(P31==0)
		{
			Delay_ms(10);
 			if(P31==0)	 
 			ch1 = 1;
		}
		if(P30==0)
		{
			Delay_ms(10);
  			if(P30==0)
 			ch1 = 2;
		}
		if(P32==0)
		{
			Delay_ms(10);
 			if(P32==0)	 
 			ch1 = 3;
		}
		if(P33==0)
		{
			Delay_ms(10);
  			if(P33==0)
 			ch1 = 4;
		}
	}

}

void Key_2()
{
	num2 = 0;
	while(num2 == 0){
		P17=1;P16=1;P15=1;P14=1;
		P13=1;P12=1;P11=1;P10=1;

		P16=0;
		if(P13==0)
		{
			Delay_ms(10);
 			if(P13==0)	 
 			num2 = 7;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num2 = 8;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num2 = 9;
		}
		P16=1;

		P15=0;
		if(P13==0)
		{
			Delay_ms(10);
 			if(P13==0)	 
 			num2 = 4;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num2 = 5;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num2 = 6;
		}
		P15=1;

		P14=0;
		if(P13==0)
		{
			Delay_ms(10);
 			if(P13==0)	 
 			num2 = 1;
		}
		if(P12==0)
		{
			Delay_ms(10);
  			if(P12==0)
 			num2 = 2;
		}
		if(P11==0)
		{
			Delay_ms(10);
 			if(P11==0)	 
 			num2 = 3;
		}
		P14=1;

		P17=1;P16=1;P15=1;P14=1;
		P13=1;P12=1;P11=1;P10=1;
	}

}

void Add()
{
	ch2 = 0;
	while(ch2 == 0){
		P17=1;P16=1;P15=1;P14=1;
		P13=1;P12=1;P11=1;P10=1;
		
		P14=0;
		if(P10==0)
		{
			Delay_ms(10);
 			if(P10==0){
				ch2=1;	 
 				switch(ch1)
				{
					case 1: sum=num1+num2; break;
					case 2: sum=num1-num2; break;
					case 3: sum=num1*num2; break;
					case 4: sum=num1/num2; break;
				}
			}
		}
		P14=0;	
	}
}