#include <stdio.h>
#include "first.h"

int fact(int num, int mun)
{
	if (1 >= num)
	{
		return mun;
		
	}
	else
	{
		mun *= num;
		return fact(num - 1, mun);
	}
}
