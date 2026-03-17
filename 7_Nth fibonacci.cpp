#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1;
    int result;
    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    cout << result;
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}