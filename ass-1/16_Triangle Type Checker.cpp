/*Write a program that takes the lengths of the three sides of a triangle and determines its type:

Equilateral: All three sides are equal.

Isosceles: Exactly two sides are equal.

Scalene: All three sides are different.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == a && c == a)
    {
        cout << "Equilateral";
    }
    else if (a == b || b == a || c == a)
    {
        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }
    return 0;
}