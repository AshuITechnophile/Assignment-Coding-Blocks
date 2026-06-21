// A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.
#include <iostream>
using namespace std;
int sum_digit(int n)
{
    int rev_sum = 0;
    while (n > 0)
    {
        int rev = n % 10;
        rev_sum = rev_sum + rev;
        n /= 10;
    }
    return rev_sum;
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int rev = sum_digit(n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            sum = sum + sum_digit(i);
            n /= i;
        }
    }
    if (rev == sum)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
// Sample Input
// 378
// Sample Output
// 1
// Explanation
// Self Explanatory