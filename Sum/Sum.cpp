#include"Sum.h"
using namespace std;

Sum::Sum(int newNum)
{
	num = newNum;
}

int Sum::getSum()
{
	int total = 0;
	for (int i = 1; i <= num; i++)
	{
		total += i;
	}
	return total;
}