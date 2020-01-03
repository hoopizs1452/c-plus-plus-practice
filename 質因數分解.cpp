#include<iostream>
using namespace std;

int main()
{
    int num, i, c;
    cout << "輸入一正整數 > ";
    cin >> num;
    
    cout << num << " = ";

    i = 2;
    while(i <= num)
    {
        c = 0;
        while (num % i == 0)
        {
            num /= i;
            c++;
        }
        
        if(c > 0)
        {
            cout << i;
            if(c > 1)
                cout << "^" << c;
            if(num > 1)
                cout << "*";
        }

        (i >= 3) ? (i += 2) : i++;
    }
}