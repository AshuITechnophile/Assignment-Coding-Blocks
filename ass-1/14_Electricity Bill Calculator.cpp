/*Write a program to calculate the total electricity bill based on the number of units consumed. The pricing is structured as follows:

For units less than or equal to 100: ₹2 per unit.

For units greater than 100 and less than or equal to 200: ₹3 per unit.

For units greater than 200: ₹5 per unit.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int unit;
    cin >> n;
    if (n <= 100)
    {
        unit = n * 2;
        cout << unit;
    }
    else if (100 < n && n <= 200)
    {
        unit = n * 3;
        cout << unit;
    }
    else if (n > 200)
    {
        unit = n * 5;
        cout << unit;
    }
    return 0;
}