#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<iomanip>
using namespace std;

int pane[4][4];
int N = 1;
void square()
{
	cout << setw(46) << "2048¹CÀ¸!!" << endl;
	cout << setw(50) << "|-----------------------|" << endl;
	for(int i=0; i<4; ++i)
	{
		cout << setw(24) << "";
		for(int j=0; j<4; ++j)
		{
			cout << setw(2) << "|" << setw(4) << pane[i][j];
			
			if(j==3)
			{
				cout << setw(2) << "|" << endl;
				cout << setw(50) << "|-----------------------|" << endl;
			}
		}
	}
}

void newGame()
{
	N = 1;
	for(int i=0; i<4; ++i)
	{
		for(int j=0; j<4; ++j)
		{
			pane[i][j] = 0;
			srand((unsigned)time(0));	
			int m = rand() % 4;
			int n = rand() % 4;
			int p = rand() % 4;
			int q = rand() % 4;
			pane[m][n] = pane[p][q] = 2;
		}
	}
	square();
}

int main()
{
	newGame();
}
