// Write a program that take an interger as input and determines whether the numbers is even or odd . An even number is divisiblw by 2 , while an odd number is not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}