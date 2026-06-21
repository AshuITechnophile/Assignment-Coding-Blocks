/*Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.
 *****
 *   *
 *   *
 *   *
 *****  */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int k = 1; k <= 1; k++)
            {
                cout << "* ";
            }
            for (int j = 1; j <= n - 2; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= 1; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}