#include"Index.h"

Index::Index(int newNum1, int newNum2)
{
	num1 = newNum1;
	num2 = newNum2;
}

int Index::getNumber()
{
	while (num1 <= num2)
	{
		int i = 0, num = 1;
		while (i++ < num1)
		{
			num *= 2;
		}
		total += num;
		num1++;
	}
	return total;
}