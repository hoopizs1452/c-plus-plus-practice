#include"FastFurious.h"
using namespace std;

FastFurious::FastFurious()
{
	time = 1;
	velocity = 1;
}

FastFurious::FastFurious(int newTime, int newVelocity)
{
	time = newTime;
	velocity = newVelocity;
}

int FastFurious::getAnswer()
{
	return velocity * time * 2;
}