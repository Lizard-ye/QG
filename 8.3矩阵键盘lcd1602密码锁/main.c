#include <REGX52.H>
#include "Delay.h"
#include "lcd1602.h"
#include "matrixKey.h"

unsigned char KeyNum=0;
unsigned int Password=0,Count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"password: ");
	while(1)
	{
		KeyNum=matrixKey();
		if(KeyNum)
		{
			
			if(KeyNum<=10)//若s1-s10按下，输入密码
			{
				
				if(Count<4)//密码4位，按下次数小于四才计入（只计入四位）
				{
					Password*=10;//密码左移一位
					Password+=KeyNum%10;//获取一位密码
					Count++;//计次加1
				}
				LCD_ShowNum(2,1,Password,4);//更新显示
			}
			if(KeyNum==11)//若s11按下（确认）
			{
				if(Password==4321)//密码正确时
				{
					LCD_Init();
					LCD_ShowString(1,1,"Hi,Lizard");
					Password=0;//密码清零
					Count=0;//计次清零
				}
				else//密码错误时
				{
					LCD_Init();
					LCD_ShowString(1,1,"Error");
					LCD_ShowString(1,8,"Try again");
					Password=0;//密码清零
					Count=0;//计次清零
				}
			}
			if(KeyNum==12)
			{
				LCD_Init();
				Password=0;//密码清零
				Count=0;//计次清零
				LCD_ShowString(1,1,"password: ");
			}

		}
	}
}
