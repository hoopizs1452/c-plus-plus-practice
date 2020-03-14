#include<iostream>
#include"DigitalSum.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	DigitalSum answer(num);

	cout << answer.getAnswer() << endl;

	system("pause");
	return 0;
}