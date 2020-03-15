#include"Bigger.h"
#include<iostream>
using namespace std;

Bigger::Bigger(int newNum)
{
	num = newNum;
}

int Bigger::getBigger()
{
	int i = 1;
	int max = num;
	while (i <= 9)
	{
		cin >> num;
		
		if (num > max)
			max = num;
		i++;
	}
	return max;
}