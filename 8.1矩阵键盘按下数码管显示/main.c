#include <REGX52.H>
#include "Delay.h"
#include "lcd1602.h"
#include "matrixKey.h"
#include "nixie.h"


unsigned char KeyNum;
unsigned char last_key = 0;
unsigned char shiwei=0;
unsigned char gewei=0;


void main()
{


	while(1)
	{
		KeyNum=matrixKey();
    if(KeyNum!=0)
    {
			last_key=KeyNum; // 记住按键值
    }

		shiwei=last_key/10;
		gewei=last_key%10;
		nixie(1,shiwei);
		nixie(2,gewei);
		
		Delay(3);
		
	}

}
