#include<iostream>
using namespace std;

typedef int Ten;
typedef int Twenties;
typedef int Fifty;
typedef int Dollar;

int main()
{
    Fifty fifties = 100;
    Twenties twenties = 100;
    Ten tens = 500;

    int no10, no20, no50;
    Dollar amount;
    while(1)
    {
        no10 = no20 = no50 = 0;
        cout << "輸入>";
        cin >> amount;

        if(! (amount==1000 || amount==500 || amount==100 || amount==50 || amount==20))
        {
            cout << "----> 無法接受此面值的錢幣!!" << endl;
            continue;
        }
        if(amount > fifties * 50 + twenties * 20 + tens * 10)
        {
            cout << "----> 硬幣金額不足!!" << endl;
            continue;
        }
        if(amount == 20)
        {
            if(tens >= 2)
            {
                no10 = 2;
                tens -= 2;
            }
        }
        else if(amount == 50)
        {
            if(twenties >= 2 && tens >= 1)
            {
                no20 = 2;
                no10 = 1;
                twenties -= 2;
                tens -= 1;
            }
            else if(twenties >=1 && tens >= 3)
            {
                no20 = 1;
                no10 = 3;
                twenties -= 1;
                tens -= 3;
            }
            else if(tens >= 5)
            {
                no10 = 5;
                tens -= 5;
            }
        }
        else
        {
            if(amount > 50)
            {
                if(amount >= 50 * fifties)
                {
                    amount -= 50 * fifties;
                    no50 = fifties;
                    fifties = 0;
                }
                else
                {
                    no50 = amount / 50;
                    fifties -= no50;
                    amount %= 50;
                }
            }
            if(amount >= 20 * twenties)
            {
                amount -= 20 * twenties;
                no20 = twenties;
                twenties = 0;
            }
            else
            {
                no20 = amount / 20;
                twenties -= no20;
                amount %= 20;
            }
            no10 = amount / 10;
            tens -= no10;
        }
        if(no10 + no20 + no50 == 0)
        {
            cout << "---> 無法兌換成等值的小硬幣!!" << endl;
            continue;
        }

        cout << "兌換> 50元 : [" << no50 << "] 個, 20元 : [" << no20
             << "]個, 10元 : [" << no10 << "] 個" << endl;
        cout << "剩餘> 50元 : [" << fifties << "] 個, 20元 : [" << twenties
             << "] 個, 10元 : [" << tens << "] 個" << endl;
        if(fifties + twenties + tens == 0)
        {
            cout << "----> 硬幣用完了!!" << endl;
            break;
        }
        cout << endl << endl;
    }
}