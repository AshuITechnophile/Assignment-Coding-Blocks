// Write a program that takes an interger as inpu and determine whether it is divisible by 5 . A number is divisible by 5 If the remainder is 0 when divided by 5.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "Divisible";
    }
    else
    {
        cout << "Not Divisible";
    }
    return 0;
}