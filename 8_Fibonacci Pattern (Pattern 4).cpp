/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34  */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            int result = a + b;
            a = b;
            b = result;
        }
        cout << endl;
    }
    return 0;
}