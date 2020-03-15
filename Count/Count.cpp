#include"Count.h"

Count::Count(int newNum)
{
	num = newNum;
}

int Count::getCount()
{
	if (num == 0)
		count = 0;
	else
		while (num != 0)
		{
			if (num / 10 != 0)
				count++;
			num /= 10;
		}
	
	return count;
}