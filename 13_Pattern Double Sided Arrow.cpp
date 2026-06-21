/*Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1
                        2 1   1 2
                    3 2 1       1 2 3
                4 3 2 1           1 2 3 4
                    3 2 1       1 2 3
                        2 1   1 2
                            1    */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 1;
    int s = 1;
    int m = (n / 2) + 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n - s; j++)
        {
            cout << "  ";
        }
        s = s + 2;
        if (i == 1)
        {
            cout << "1 ";
            cout << endl;
        }
        else
        {
            int p = i;
            for (int k = 1; k <= i; k++)
            {
                cout << p << " ";
                p--;
            }
            for (int j = 1; j <= l; j++)
            {
                cout << "  ";
            }
            l = l + 2;
            for (int k = 1; k <= i; k++)
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
    for (int i = m - 1; i >= 1; i--)
    {
        if (i == m - 1)
        {
            for (int j = 1; j <= m / 2; j++)
            {
                s = s - 2;
            }
        }
        for (int j = 1; j <= n - s; j++)
        {
            cout << "  ";
        }
        s = s - 2;
        if (i == 1)
        {
            cout << "1 ";
            cout << endl;
        }
        else
        {
            int p = i;
            for (int k = 1; k <= i; k++)
            {
                cout << p << " ";
                p--;
            }
            if (i == m - 1)
            {
                for (int j = 1; j <= m / 2; j++)
                {
                    l = l - 2;
                }
            }
            for (int j = 1; j <= l; j++)
            {
                cout << "  ";
            }
            l = l - 2;
            for (int k = 1; k <= i; k++)
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
    return 0;
}