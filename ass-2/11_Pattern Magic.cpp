/*You will be given a number N. You have to code a hollow diamond looking pattern.
The output for N=5 is given in the following image.
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *   */
#include <iostream>
using namespace std;
int main()
{
    int n;
    int l = 1;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        if (i == n)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int k = 1; k <= l; k++)
            {
                cout << "  ";
            }
            l = l + 2;
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        if (i == n)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            if (i == 2)
            {
                for (int j = 1; j <= i; j++)
                {
                    l = l - 2;
                }
            }
            for (int k = 1; k <= l; k++)
            {
                cout << "  ";
            }
            l = l - 2;
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}