// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
#include <iostream>
using namespace std;
int main()
{
    int sum = 1;
    while (sum > 0)
    {
        int n;
        cin >> n;
        sum = sum + n;
        if (sum > 0)
        {
            cout << n << endl;
        }
    }
    return 0;
}
// Sample Input
// 1
// 2
// 88
// -100
// 49
// Sample Output
// 1
// 2
// 88