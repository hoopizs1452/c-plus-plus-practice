#include"Privacy2.h"

Privacy2::Privacy2(int newNum)
{
	num = newNum;
}

int Privacy2::getAnswer()
{
	int a, b, c, d, a1, b1, c1, d1;

	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 1000 % 100 / 10;
	d = num % 1000 % 100 % 10;

	a1 = (a + 3) % 10;
	b1 = (b + 3) % 10;
	c1 = (c + 3) % 10;
	d1 = (d + 3) % 10;

	return (c1 * 1000) + (d1 * 100) + (a1 * 10) + b1;
}