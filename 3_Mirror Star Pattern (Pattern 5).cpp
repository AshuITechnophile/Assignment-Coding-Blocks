/*Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *
*  *  *  *  *
   *  *  *
      *   */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = (n / 2) + 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = m - 1; i >= 1; i--)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}