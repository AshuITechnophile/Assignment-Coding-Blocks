// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int n1, int n2)
{
    while (n1 <= n2)
    {
        int num = n1, arm = 0;
        int comp = n1;
        int num_count = 0;
        while (num > 0)
        {
            num = num / 10;
            num_count++;
        }
        int temp = n1;
        while (temp > 0)
        {
            int rev = temp % 10;
            arm = arm + pow(rev, num_count);
            temp /= 10;
        }
        if (arm == comp)
        {
            cout << comp << endl;
        }

        n1++;
    }
}
int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    armstrong(n1, n2);
    return 0;
}
// Sample Input
// 400
// 1000
// Sample Output
// 407
// Explanation
// Each number in output is in separate line.