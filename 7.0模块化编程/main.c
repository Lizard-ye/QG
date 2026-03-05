#include <REGX52.H>
#include "Delay.h"
#include "nixie.h"
void main()
{
	while(1)
	{
		nixie(1,1);
		nixie(2,2);
		nixie(3,3);
	}
}
