#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i < n; i++)
    {
        int result = a + b;
        a = b;
    }
}
int main()
{
    return 0;
}