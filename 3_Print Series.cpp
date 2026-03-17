#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    while (n > 0)
    {
        int k = n % 10;
        n = n / 10;
        sum = sum * 10 + k;
    }
    cout << sum;
    return 0;
}