#include<iostream>
#include<string>
#include<cstdlib> 
#include<ctime>
using namespace std;

int main()
{
    string num[4] = {};
    srand(time(0));
    for(int i=0; i<=3; i++)
    {
    	num[i] = rand() % 26 + 65;
    }
    for(int j=0; j<=3; j++)
    {
    	cout << num[j];
    }
    cout << endl;
}
