#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    int pick;
    cin >> n1;
    cin >> n2;
    for (int n = 1; n <= n1; n++)
    {
        pick = 3 * n + 2;
        if (pick % n2 != 0)
        {
            cout << pick << endl;
        }
    }
    return 0;
}