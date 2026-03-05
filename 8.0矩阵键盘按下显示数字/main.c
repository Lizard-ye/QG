#include <REGX52.H>
#include "Delay.h"
#include "lcd1602.h"
#include "matrixKey.h"

unsigned char KeyNum;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"hi,lizard666");
	while(1)
	{
		KeyNum=matrixKey();
		if(KeyNum)
		{
			LCD_ShowNum(2,1,KeyNum,2);
		}
	}

}
