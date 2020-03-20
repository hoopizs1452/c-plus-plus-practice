#include <iostream>
#include "Privacy.h"
using namespace std;

int main()
{
	int num;
	cin >> num;
	Privacy ans(num);

	ans.getAnswer();
	system("pause");
	return 0;
}