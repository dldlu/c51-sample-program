#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器

typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;

sbit LSA=P2^2;
sbit LSB=P2^3;
sbit LSC=P2^4;

u8 code smgduan[17]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
					0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//显示0~F的值

sbit K1=P3^1;
sbit K2=P3^0;
sbit K3=P3^2;
sbit K4=P3^3;

sbit D1=P2^0;
sbit D2=P2^1;
sbit D3=P2^5;
				 
void delay_1s()
{	 
    int i,j;
   	for(i = 0;i<110; ++i){
	  for(j = 0;j<1000;++j){
	    ;
	  }
	}
}

void main()
{	
	while(1)
	{
	K1=1;
	K2=1;
	K3=1;
	K4=1;
	
	if(K1==0)
	{
		delay_1s();
		D1=~D1;
	}
	
	
	if(K2==0)
	{
		delay_1s();
		D2=~D2;
	}

	if(K3==0)
	{
		delay_1s();
		D3=~D3;
	}

	if(K4==0)
	{
		LSA=1;
		LSB=1;
		LSC=1;
		delay_1s();
		if(D1==0&&D2==0&&D3==0)
		{
			P0=smgduan[6];
		
		}
		else if(D1!=0&&D2==0&&D3==0)
		{
			 P0=smgduan[5];
			 
		}
		else if(D1==0&&D2!=0&&D3==0)
		{
			P0=smgduan[4];
			
		}
		else if(D1==0&&D2==0&&D3!=0)
		{
			P0=smgduan[3];
			
		}
		else if(D1!=0&&D2!=0&&D3==0)
		{
			P0=smgduan[3];
			
		}
		else if(D1==0&&D2!=0&&D3!=0)
		{
			P0=smgduan[1];
			
		}
		else if(D1!=0&&D2==0&&D3!=0)
		{
			P0=smgduan[2];
			
		}
		else if(D1!=0&&D2!=0&&D3!=0)
		{
			P0=smgduan[0];
			
		}
		

	}	

		
	}
		
	
}