#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
    const int S = 7;
    const int R = 5;
    int i, j, k, n, tmp, count;
    int no[S][S], m[S*S];

    srand(static_cast<unsigned int>(time(NULL)));

    for(i = 0; i < S*S; i++)
        m[i] = i + 1;
    for(i = S*S-1; i > 0; i--)
    {
        j = rand()%(i+1);
        if(i != j)
        {
            tmp = m[i];
            m[i] = m[j];
            m[j] = tmp;
        }
    }

    k = 0;
    for(i = 0; i<S; i++)
    {
        for(j = 0; j < S; j++, k++)
            no[i][j] = m[k];
    }
    for(i = S*S-1; i > 0; i--)
    {
        j = rand()%(i+1);
        if(i != j)
        {
            tmp = m[i];
            m[i] = m[j];
            m[j] = tmp;
        }
    }

    bool found;
    for(k = 0; k < S*S; k++)
    {
        found = false;
        for(i = 0; i < S; i++)
        {
            for(j = 0; j < S; j++)
            {
                if(no[i][j] == m[k])
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        no[i][j] = 0;
        cout << "> " << k+1 << endl;
        for(i = 0; i < S; i++)
        {
            for(j = 0; j < S; j++)
            {
                if(no[i][j])
                    cout << setw(2) << no[i][j] << " ";
                else
                    cout << setw(3) << " * ";
            }
            cout << endl;
        }
        cout << endl << endl;

        for(i = 0; i < S; i++)
        {
            for(j = 0; j <= S-R; j++)
            {
                count = 0;
                for(n = 0; n < R; n++)
                {
                    if(no[i][j+n] == 0)
                        count++;
                }
                if(count == R)
                {
                    system("pause");
                    return 0;
                }
            }
        }

        for(i = 0; i < S; i++)
        {
            for(j = 0; j <= S-R; j++)
            {
                count = 0;
                for(n = 0; n < R; n++)
                {
                    if(no[j+n][i] == 0)
                        count++;
                }
                if(count == R)
                {
                    system("pause");
                    return 0;
                }
            }
        }

        for(i = 0; i <= S-R; i++)
        {
            for(j = 0; j <= S-R; j++)
            {
                count = 0;
                for(n = 0; n < R; n++)
                {
                    if(no[i+n][j+n] == 0)
                        count++;
                }
                if(count == R)
                {
                    system("pause");
                    return 0;
                }
            }
        }

        for(i = 0; i <= S-R; i++)
        {
            for(j = S-1; j >= R-1; j--)
            {
                count = 0;
                for(n = 0; n < R; n++)
                {
                    if(no[i+n][j-n] == 0)
                        count++;
                }
                if(count == R)
                {
                    system("pause");
                    return 0;
                }
            }
        }
    }
    system("pause");
    return 0;
}