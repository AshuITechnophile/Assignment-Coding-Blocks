// Write a program that takes two integers as input and checks whether they are equal to each other or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    if (n == m)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }
    return 0;
}