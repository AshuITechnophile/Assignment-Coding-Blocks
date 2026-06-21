// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}
// Sample Output
// Prime
// Explanation
// The output is case specific