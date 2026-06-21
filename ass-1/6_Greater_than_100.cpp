// Write a program that takes a integer as input and checks whether that number is strictly greather than 100.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 100)
    {
        cout << "Greater";
    }
    else
    {
        cout << "Not Greater";
    }
    return 0;
}