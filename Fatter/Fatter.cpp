#include"Fatter.h"
using namespace std;

Fatter::Fatter(int newHigh, int newGender)
{
	high = newHigh;
	gender = newGender;
}

double Fatter::getAnswer()
{
	if (gender == 1)
	{
		return (high - 80) * 0.7;
	}
	else
		return (high - 70) * 0.6;
}