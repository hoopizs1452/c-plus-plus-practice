#include<iostream>
#include<iomanip>
#include"Fatter.h"
using namespace std;

int main()
{
	int high, gender;
	cin >> high >> gender;
	Fatter answer(high, gender);

	cout << setprecision(1) << fixed << answer.getAnswer() << endl;
}