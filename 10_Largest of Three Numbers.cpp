// Write a program that takes three integers as input and determines which one is the largest.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    return 0;
}