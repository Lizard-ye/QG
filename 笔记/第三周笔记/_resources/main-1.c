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
		case 1:
			P2_4=1;P2_3=1;P2_2=1;break;
		case 2:
			P2_4=1;P2_3=1;P2_2=0;break;
		case 3:
			P2_4=1;P2_3=0;P2_2=1;break;
		case 4:
			P2_4=1;P2_3=0;P2_2=0;break;
		case 5:
			P2_4=0;P2_3=1;P2_2=1;break;
		case 6:
			P2_4=0;P2_3=1;P2_2=0;break;
		case 7:
			P2_4=0;P2_3=0;P2_2=1;break;
		case 8:
			P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=core[number];
	Delay_ms(1);
	P0=0x00;
}
void main()
{
	while(1)
	{
		nixie(1,1);
	
		nixie(2,1);

		nixie(3,4);
	
		nixie(4,5);
	
		nixie(5,1);

		nixie(6,4);
	}



}

