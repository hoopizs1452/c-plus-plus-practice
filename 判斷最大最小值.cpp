#include<iostream>
using namespace std;

int main()
{
	int array[4] = {};
	
	for(int i=0; i<4; i++)
	{
		cin >> array[i];
	}
	int max = 0;
	int min = array[0];
	for(int j=0; j<4; j++)
	{
		if(array[j]>max)
			max = array[j];
		if(array[j]<min)
			min = array[j];
	}
	cout << "max:" << max << endl << "min:" << min << endl;
} 
