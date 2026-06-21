// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.
#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return __gcd(a, b);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);

    return 0;
}
// Sample Input
// 16
// 24
// Sample Output
// 8
// Explanation
// The largest number that divides both N1 and N2 is called the GCD of N1 and N2.