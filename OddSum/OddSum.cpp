#include"OddSum.h"

OddSum::OddSum(int newNum1, int newNum2)
{
	num1 = newNum1;
	num2 = newNum2;
}

int OddSum::getSum()
{
	i = num1;
	while (i <= num2)
	{
		if (i % 2 != 0)
			total += i;
		i++;
	}
	return total;
}