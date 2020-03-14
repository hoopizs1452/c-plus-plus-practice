#include"Operation.h"

Operation::Operation()
{
	num1 = 1;
	num2 = 1;
}

Operation::Operation(int newNum1, int newNum2)
{
	num1 = newNum1;
	num2 = newNum2;
}

int Operation::getDecrease()
{
	return num1 - num2;
}

int Operation::getSum()
{
	return num1 + num2;
}

int Operation::getProduct()
{
	return num1 * num2;
}

int Operation::getQuotient()
{
	return num1 / num2;
}

int Operation::getResidue()
{
	return num1 % num2;
}