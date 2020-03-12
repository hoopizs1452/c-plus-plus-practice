#include<iostream>
using namespace std;

int main()
{
	int start, end, count, total = 0;
	cin >> start >> end;
	count = start;
	
	do{
		if(count%2==0 || count%5==0)
			total += count;
			count += 1;
	}while(count<=end);
	cout << total << endl;
}
