#include<iostream>
#include"Operation.h"
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	Operation answer(num1, num2);

	cout << num1 << "+" << num2 << "=" << answer.getSum() << endl;
	cout << num1 << "-" << num2 << "=" << answer.getDecrease() << endl;
	cout << num1 << "*" << num2 << "=" << answer.getProduct() << endl;
	cout << num1 << "/" << num2 << "=" << answer.getQuotient() << "......" << answer.getResidue() << endl;
	
	system("pause");
	return 0;
}