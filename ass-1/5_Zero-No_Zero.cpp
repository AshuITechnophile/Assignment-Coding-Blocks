// Write a program that takes an interger as input and checks whether the number is zero or non-zero.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Zero";
    }
    else
    {
        cout << "Non-Zero";
    }
    return 0;
}