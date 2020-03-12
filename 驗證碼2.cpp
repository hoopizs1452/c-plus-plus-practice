#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	char array[4];
	int num = 0;
	
	srand(time(0));
	
	for(int i=0; i<4; ++i)
	{
		num = rand();
		num %= 62;
		
		if(num <=10)
		{
			num += 47;
		}
		else if(num <= 36)
		{
			num += 54;
		}
		else
		{
			num += 60;
		}
		
		array[i] = (char)num;
	}
	
	for(int j=0; j<4; ++j)
	{
		cout << array[j];
	}
	cout << endl;
}
