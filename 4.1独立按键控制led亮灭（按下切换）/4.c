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

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay_ms(20);
			while(P3_1==0);
			Delay_ms(20);
			
			P2_0=~P2_0;
			
		}
	}
}