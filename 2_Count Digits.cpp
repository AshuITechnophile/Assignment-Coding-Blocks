#include <iostream>
using namespace std;
int main()
{
    int n;
    int digit;
    int count = 0;
    cin >> n;
    cin >> digit;
    while (n > 0)
    {
        int k = n % 10;
        n = n / 10;
        if (digit == k)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}