// Write a program to calculate the bonus amount for an employee based on their years of experience. If the employee has 5 or more years of experience, they receive a bonus of 10% of their salary. Otherwise, they receive no bonus (0).
#include <iostream>
using namespace std;
int main()
{
    int s, y;
    cin >> s >> y;
    if (y >= 5)
    {
        int bonus = (s / 100 * 10);
        cout << bonus;
    }
    else
    {
        cout << "0";
    }
    return 0;
}