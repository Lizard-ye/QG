#include <REGX52.H>


void Delay_ms(unsigned int ms)
{
    unsigned int i, j; 

    for (i = ms; i > 0; i--) 
    {
        for (j = 114; j > 0; j--) 
        {
            
        }
    }
}

unsigned char core[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void nixie(unsigned char location,number)
{
	switch(location)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=core[number];
}
void main()
{
	nixie(8,0);
	Delay_ms(1000);
	nixie(8,1);
	Delay_ms(1000);
	nixie(8,2);
	Delay_ms(1000);
	nixie(8,3);
	Delay_ms(1000);
	nixie(8,4);
	Delay_ms(1000);
	nixie(8,5);
	Delay_ms(1000);
	nixie(8,6);
	Delay_ms(1000);
	nixie(8,7);
	Delay_ms(1000);
	nixie(8,8);
	Delay_ms(1000);
	nixie(8,9);
	Delay_ms(1000);
	while(1);
	{
	}

}