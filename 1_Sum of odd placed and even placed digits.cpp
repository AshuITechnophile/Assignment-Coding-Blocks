#include <iostream>
#include <vector>
using namespace std;
void sumofevenandodd(int n)
{
    int sum_even = 0, sum_odd = 0, position = 0;

    while (n > 0)
    {
        int k = n % 10;
        n = n / 10;
        position++;
        if (position % 2 == 0)
        {
            sum_even += k;
        }
        else
        {
            sum_odd += k;
        }
    }
    cout << sum_odd << endl;
    cout << sum_even << endl;
}
int main()
{
    int n;
    cin >> n;
    sumofevenandodd(n);
    return 0;
}