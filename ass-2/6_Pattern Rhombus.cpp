/*Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1   */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int l = i;
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << l << " ";
            l++;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            if (j == 1)
            {
                for (int u = 1; u <= 2; u++)
                {
                    l--;
                }
            }
            cout << l << " ";
            l--;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        int l = i;
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << l << " ";
            l++;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            if (j == 1)
            {
                for (int u = 1; u <= 2; u++)
                {
                    l--;
                }
            }
            cout << l << " ";
            l--;
        }
        cout << endl;
    }
    return 0;
}