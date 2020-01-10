#include<iostream>
using namespace std;

int sleep(int t)
{
    for(int z = 0; z < 10000000 * t; z++);
}

int main()
{
    const int width = 30, height = 20;

    int i, j, x, y, n, count, times;
    int a[height][width] = {0}, b[height][width] = {0};

    cout << "請輸入動物的個數:";
    cin >> n;

    cout << "請輸入動物的位置座標:" << endl;
    for(i =0; i<n; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }

    cout << "請問要運算幾個世代:";
    cin >> times;

    for(n = 0; n < times; n++)
    {
        for(i = 1; i < height - 1; i++)
        {
            for(j = 1; j < width - 1; j++)
            {
                if(a[i][j] == 1)
                {
                    count = 0;
                    for(x = i - 1; x < i + 2; x++)
                    {
                        for(y = j - 1; y < j + 2; y++)
                        {
                            count += a[x][y];
                        }
                    }
                    if(count == 3 || count == 4)
                    {
                        b[i][j] = 1;
                    }
                }
                else
                {
                    count = 0;
                    for(x = i - 1; x < i + 2; x++)
                    {
                        for(y = i - 1; y < i + 2; y++)
                        {
                            count += a[x][y];
                        }
                    }
                    if(count == 3)
                    {
                        b[i][j] = 1;
                    }
                }
            }
        }
        cout << "\x1b[2J";
        cout << "\x1b[1;35H現在是第\x1b[1;33m" << n+1 << "\x1b[0m代" << flush;

        for(x = 1; x < height; x++)
        {
            for(y = 1; y < width; y++)
            {
                if(a[x][y] == 1)
                {
                    cout << "\x1b[" << x << ';' << y << 'H' << "\x1b[1;32m" << 'O' << ' ' << "\x1b[0m";
                }
                else
                {
                    cout << "\x1b[" << x << ';' << y << 'H' << ':' << ' ';
                }
                
                
            }
        }
        cout << flush;

        sleep(10);

        for(x = 0; x < height; x++)
        {
            for(y = 0; y < width; y++)
            {
                a[x][y] = b[x][y];
                b[x][y] = 0;
            }
        }
        cout << "\x1b[20;1H";
    }
}