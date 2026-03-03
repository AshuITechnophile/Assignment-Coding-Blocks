/*Write a program to determine . If a given year is a leap year . A year is leap year if :
It is divisible by 400 , OR
It is divisible by 4 but not divible by 100*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 400 == 0)
    {
        cout << "Leap Year";
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
    return 0;
}