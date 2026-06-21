/*Write a program that takes a student's marks as input and assigns a grade based on the following criteria:

Marks greater than or equal to 90: Grade A

Marks greater than or equal to 75 and less than 90: Grade B

Marks greater than or equal to 60 and less than 75: Grade C

Marks less than 60: Fail*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 90)
    {
        cout << "A";
    }
    else if (75 <= n && n < 90)
    {
        cout << "B";
    }
    else if (60 <= n && n < 75)
    {
        cout << "C";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}