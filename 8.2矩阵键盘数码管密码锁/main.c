#include <REGX52.H>
#include "Delay.h"
#include "lcd1602.h"
#include "matrixKey.h"
#include "nixie.h"


unsigned char KeyNum;
unsigned char last_key = 0;
unsigned char four=0;
unsigned char three=0;
unsigned char two=0;
unsigned char one=0;
unsigned int Count=0,sign=0;

void main()
{


	while(1)
	{
		KeyNum=matrixKey();
    if(KeyNum)
    {
			if(KeyNum<=10)
			{
				last_key=KeyNum%10; // 记住按键值
				Count++;//位数加一
				

				
			}
			
			if(KeyNum==11)//确认键
			{
				if(one==6,two==6,three==6,four==6)//密码6666
				{
					sign=1;
				}
				else
				{
					sign=2;
				}

			}
			
			if(KeyNum==12)//清零
			{
				Count=0;
				last_key=0;
				one=0;
				two=0;
				three=0;
				four=0;
			}
			
			
			

    }
		if(sign==1)//代表密码正确
		{
			nixie(8,1);
		}
		if(sign==2)//代表密码错误
		{
			nixie(8,0);
		}
			
		
		if(Count==1)
		{
		one=last_key;
		}
		if(Count==2)
		{
		two=last_key;
		}
		if(Count==3)
		{
		three=last_key;
		}
		if(Count==4)
		{
		four=last_key;
		}
		



		nixie(1,one);
		nixie(2,two);
		nixie(3,three);
		nixie(4,four);
		
		Delay(3);
		
	}

}
