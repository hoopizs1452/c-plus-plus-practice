#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    double num;
    cout << "輸入一10進位浮點數:";
    cin >> num;

    int a, c = static_cast<int>(num);
    double b, d = num - c;

    int tmp, base;
    string no;

    for(base = 2; base <= 16; base++)
    {
        a = c;
        b = d;
        no = "";

        while (a != 0)
        {
            tmp = a % base;
            no = (tmp > 9 ? static_cast<char>(tmp-10+'a') : static_cast<char>(tmp+'0')) + no;
            a /= base;
        }

        no += '.';
        for(int i =0; i<10; i++)
        {
            tmp = static_cast<int>(b*base);
            b = b*base-tmp;
            no += (tmp > 9 ? static_cast<char>(tmp-10+'a') : static_cast<char>(tmp+'0'));
        }
        cout << setw(2) << base << "進位 -->" << no << endl;
    }
}