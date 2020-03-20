#include"Privacy.h"

Privacy::Privacy(int newNum)
{
	num = newNum;
}

int Privacy::getAnswer()
{
	int a, b, c, d, a1, b1, c1, d1;

	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 1000 % 100 / 10;
	d = num % 10;

	a1 = (a + 7) % 10;
	b1 = (b + 7) % 10;
	c1 = (c + 7) % 10;
	d1 = (d + 7) % 10;

	return (c1 * 1000) + (d1 * 100) + (a1 * 10) + b1;
}