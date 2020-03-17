#include<iostream>
#include"Privacy.h"
using namespace std;

int main()
{
	int number;
	cin >> number;
	Privacy ans(number);

	cout << ans.getAnswer() << endl;
	system("pause");
	return 0;
}