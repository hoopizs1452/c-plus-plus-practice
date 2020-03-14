#include<iostream>
#include<iomanip>
#include"TemperatureConversion.h"
using namespace std;

int main()
{
	int f;
	cin >> f;
	TemperatureConversion answer(f);

	cout << setprecision(3) << fixed << answer.getAnswer() << endl;
}