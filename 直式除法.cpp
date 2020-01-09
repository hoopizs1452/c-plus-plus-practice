#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "> 輸入被除數與除數:";
    cin >> a >> b;

    c = a / b;
    int tmp;
    int na, nb, nc, nd;

    tmp = a;
    for(na = 0; tmp !=0; na++)
        tmp /= 10;
    tmp = b;
    for(nb = 0; tmp != 0; nb++)
        tmp /= 10;
    tmp = c;
    for(nc = 0; tmp!= 0; nc++)
        tmp /= 10;

    int f, g, h, e;
    cout << setw(2+nb+3+na) << c << "\n" << setw(2+nb+2) << ' ';
    for(int j = 0; j < na+1; j++)
        cout << '-';
    cout << "\n" << setw(2+nb) << b << ")" << a;

    g = a;
    for(int i = 0; i < nc; i++)
    {
        d = c;
        for(int j = 1; j < nc-i; j++)
            d /= 10;
        d %= 10;
        
        if(d != 0)
        {
            cout << endl;

            f = 1;
            for(int j = 1; j < nc-i; j++)
                f *= 10;
            f *= d * b;

            g -= f;
            h = g;
            for(int j = 1; j < nc-i-1; j++)
                h /= 10;
            
            tmp = b * d;
            for(nd = 0; tmp != 0; nd++)
                tmp /= 10;
            cout << setw(2+nb+3+(na-nc+i+1)) << b * d << endl;
            cout << setw(2+nb+3+i-1) << ' ';
            for(int j = 0 ; j < na-nc+2; j++)
                cout << '-';

            if(i < nc - 1)
                cout << setw(2+nb+3+(na-nc+i+2)) << h;
            else
            {
                cout << setw(2+nb+3+(na-nc+i+1)) << h;
                if(h != a%b)
                    cout << "> not correct\n";
            }
        }
        else
        {
            e = a;
            for(int j = 1; j < (nc-(i+1)); j++)
                e /= 10;
            e %= 10;
            if(i < nc-1)
                cout << e;
        }
    }
    cout << endl;
}