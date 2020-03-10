#include<iostream>
using namespace std;

int main()
{
	int num, h, m, s;
	cin >> num;
	
	s = num % 60;
	m = num / 60 % 60;
	h = num / 60 / 60;
	
	cout << h << ":" << m << ":" << s << endl;
}
