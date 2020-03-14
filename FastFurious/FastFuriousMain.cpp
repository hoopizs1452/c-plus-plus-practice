#include<iostream>
#include"FastFurious.h"
using namespace std;

int main()
{
	int time, velocity;
	cin >> time >> velocity;
	FastFurious answer(time, velocity);

	cout << answer.getAnswer() << endl;

	system("pause");
	return 0;
}