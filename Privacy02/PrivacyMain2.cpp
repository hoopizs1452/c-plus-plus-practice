#include<iostream>
#include"Privacy2.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	Privacy2 ans(num);

	cout << ans.getAnswer() << endl;
	system("pause");
	return 0;
}