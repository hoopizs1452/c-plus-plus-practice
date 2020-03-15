#include<iostream>
#include"OddSum.h"
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	OddSum ans(num1, num2);

	cout << ans.getSum() << endl;
}