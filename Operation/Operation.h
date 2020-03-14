//#pragma once
#ifndef Operation_H
#define Operation_H

class Operation
{
public:
	int num1, num2;
	Operation();
	Operation(int, int);
	int getDecrease();
	int getSum();
	int getProduct();
	int getQuotient();
	int getResidue();
};
#endif
