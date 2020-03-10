#include<iostream>
using namespace std;

int main()
{
	int h1, h2, m1, m2, s1, s2, total1, total2, final;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	
	total1 = (h1*3600)+(m1*60)+s1;
	total2 = (h2*3600)+(m2*60)+s2;
	final = total2 - total1;
	
	cout << final << endl;
}
