#include <REGX52.H>
#include <INTRINS.H>




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
		P2=0x00;//0000 0000
		Delay_ms(500);
		
		
		P2=0xff;//1111 1111
		Delay_ms(500);
		
		
	}


}