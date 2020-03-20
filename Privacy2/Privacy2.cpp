#include "Privacy2.h"
#include <iostream>
using namespace std;

Privacy2::Privacy2(int newNum)
{
	num = newNum;
}

void Privacy2::setPrivacy2(int num1)
{
	num = num1;
}

void Privacy2::getAnswer()
{
	int a, b, c, d, a1, b1, c1, d1;

	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 1000 % 100 / 10;
	d = num % 10;

	a1 = (a + 3) % 10;
	b1 = (b + 3) % 10;
	c1 = (c + 3) % 10;
	d1 = (d + 3) % 10;

	cout << c1 << d1 << a1 << b1 << endl;
}