/*Take N (number of rows), print the following pattern (for N = 4).

                       1
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4  */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // left spacing
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // left number pattern
        int o = i;
        for (int k = 1; k <= i; k++)
        {
            cout << o << " ";
            o++;
        }
        // logic of right pattern
        int l = i;
        int p = i - 1;
        l = (l + p) - 1;
        // Printing right pattern
        for (int j = 1; j <= i - 1; j++)
        {
            cout << l << " ";
            l--;
        }
        cout << endl;
    }

    return 0;
}