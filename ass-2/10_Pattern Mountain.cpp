/*Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   */
#include <iostream>
using namespace std;
int main()
{
    int n;
    int l;
    cin >> n;
    int p = n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= p; k++)
        {
            cout << "  ";
        }
        p--;
        if (i == n)
        {
            l = i;
            l = l - 1;
            for (int j = 1; j <= n - 1; j++)
            {
                cout << l << " ";
                l--;
            }
        }
        else
        {
            l = i;
            for (int j = 1; j <= i; j++)
            {
                cout << l << " ";
                l--;
            }
            cout << endl;
        }
    }
    return 0;
}