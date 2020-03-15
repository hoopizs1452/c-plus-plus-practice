#include<iostream>
#include"Count.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	Count ans(num);

	cout << ans.getCount() << endl;
}