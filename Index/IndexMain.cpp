#include<iostream>
#include"Index.h"
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	Index ans(num1, num2);

	cout << ans.getNumber() << endl;
}