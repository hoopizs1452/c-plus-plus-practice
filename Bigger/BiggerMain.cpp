#include<iostream>
#include"Bigger.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	Bigger ans(num);

	cout << ans.getBigger() << endl;
}