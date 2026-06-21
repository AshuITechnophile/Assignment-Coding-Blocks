#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    cout << a;
    return 0;
}