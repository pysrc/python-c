#include "pydll.h"

int isme(long x)
{
	long sm = 0;
	long i = 1;
	while(i < x)
	{
		if(x % i == 0)
		{
			sm += i;
		}
		i++;
	}
	if(sm == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

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