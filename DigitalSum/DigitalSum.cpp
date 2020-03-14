#include"DigitalSum.h"
using namespace std;

DigitalSum::DigitalSum(int newNum)
{
	number = newNum;
}

int DigitalSum::getAnswer()
{
	return (number / 100) + (number % 100 / 10) + (number % 10);
}