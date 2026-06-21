// Write a program that takes a person's age as input and determines. If they are eligible to vote. A person is eligible to vote if their are is 18 or geather.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not Eligible";
    }
    return 0;
}