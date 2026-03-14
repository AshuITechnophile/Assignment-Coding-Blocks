/*Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5
             5 4               4 5
             5 4 3           3 4 5
             5 4 3 2       2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2 1 0 1 2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2       2 3 4 5
             5 4 3           3 4 5
             5 4               4 5
             5                   5  */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 1;
    int p;
    // Upper number pattern
    for (int i = n; i >= 1; i--)
    {
        if (i == 1)
        {
            for (int j = n; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = n; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "  ";
        }
        p = n - (l - 1);
        for (int j = 1; j <= l; j++)
        {
            cout << p << " ";
            p++;
        }
        l++;
        cout << endl;
    }
    // Mid number pattern
    for (int j = n; j >= 1; j--)
    {
        cout << j << " ";
    }
    cout << "0 ";
    for (int j = 1; j <= n; j++)
    {
        cout << j << " ";
    }
    cout << endl;
    // lower number pattern
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = n; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = n; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "  ";
        }
        p = i;
        for (int j = n; j >= i; j--)
        {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
    return 0;
}