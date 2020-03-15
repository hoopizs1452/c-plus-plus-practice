#include<iostream>
#include"Sum.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	Sum answer(num);

	cout << answer.getSum() << endl;
	system("pause");
	return 0;
}