#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int even_sum = 0;
    int odd_sum = 0;
    while (n > 0)
    {
        int k = n % 10;
        n = n / 10;
        if (n % 2 == 0)
        {
            even_sum = even_sum + k;
        }
        else
        {
            odd_sum = odd_sum + k;
        }
    }
    cout << "This is sum of even postion numbers = " << even_sum;
    cout << endl;
    cout << "This is sum of odd postion number = " << odd_sum;
    return 0;
}