/*Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4
                              3 2 1 0 1 2 3
                                2 1 0 1 2
                                  1 0 1
                                    0
                                  1 0 1
                                2 1 0 1 2
                              3 2 1 0 1 2 3
                            4 3 2 1 0 1 2 3 4
                          5 4 3 2 1 0 1 2 3 4 5   */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Upper number pattern
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j < 0; j++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << "  ";
            }
        }
        for (int j = (n - i) + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "0 ";
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int j = 1; j <= n; j++)
    {
        cout << "  ";
    }
    cout << "0 ";
    cout << endl;
    // lower number pattern
    for (int i = n; i >= 1; i--)
    {
        if (i == 1)
        {
            for (int j = 1; j < 0; j++)
            {
                cout << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << "  ";
            }
        }
        for (int j = (n - i) + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "0 ";
        for (int j = 1; j <= (n - i) + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}