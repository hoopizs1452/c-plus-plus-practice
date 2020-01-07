#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int SIZE = 2;

int checkA(int player[], int AI[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(AI[i] == player[i])
            count++;
    }
    return count;
}

int checkB(int player[], int AI[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(player[i] == AI[j])
                count++;
        }
    }
    return count;
}

int main()
{
    int player[SIZE] = {};
    int AI[SIZE] = {};
    int run = false;
    int step = 0;
    cout << "請輸入" << SIZE << "個數字:";
    for(int i=0; i<SIZE; i++)
    {
        cin >> player[i];
    }
    cout << "你輸入的數字:" << endl;
    for(int i=0; i<SIZE; i++)
    {
        cout << player[i];
    }
    cout << endl;
    while (run != true)
    {
        srand(time(0));
        for(int i=0; i<SIZE; i++)
        {
            AI[i] = rand() % 10;
        }
        for(int i=0; i<SIZE; i++)
        {
            cout << AI[i];
        }
        cout << endl;
        
        int a = checkA(player, AI, SIZE);
        int b = checkB(player, AI, SIZE);
        
        if(a==SIZE && b==0)
            run = true;
        step++;
        
        cout << a << "A" << b << "B" << endl;
    }
    cout << "Aha!!I find out!!" << endl;
    cout << "I spend " << step << "step" << endl;
}