// Given a integer as a input and replace all the '0' with '5' in the integer
#include <iostream>
using namespace std;
long long rev(long long n)
{
    long long sum = 0;

    while (n > 0)
    {
        int rev = n % 10;
        if (rev == 0)
        {
            rev = 5;
        }
        sum = sum * 10 + rev;
        n /= 10;
    }

    long long m;
    while (sum > 0)
    {
        int rev = sum % 10;
        m = m * 10 + rev;
        sum /= 10;
    }
    return m;
}
int main()
{
    long long n;
    cin >> n;

    if (n == 0)
    {
        cout << 5;
        return 0;
    }
    else
    {
        cout << rev(n);
    }
    return 0;
}
// Sample Input
// 102
// Sample Output
// 152
// Explanation
// Check each digit , if it is nonzero, then no change required but if it is zero then replace it by 5.