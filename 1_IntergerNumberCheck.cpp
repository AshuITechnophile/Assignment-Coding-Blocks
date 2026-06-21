// Write a program that take an interget as input and determines if the number is postive, negative, or zero.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "Positive";
    }
    else if (n < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
    return 0;
}