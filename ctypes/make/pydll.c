#include "pydll.h"
#include "isme.h"


void run(long x)
{
	long i = 1;
	while(i<x)
	{
		if(isme(i))
		{
			printf("%ld\n", i);
		}
		i++;
	}
}
