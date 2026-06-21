// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = n;
    int arm = 0;
    int count = 0;
    int temp = n;

    while (temp > 0)
    {
        int rev = temp % 10;
        temp /= 10;
        count++;
    }
    while (n > 0)
    {
        int rev = n % 10;
        arm = arm + pow(rev, count);
        n /= 10;
    }
    if (arm == sum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
// Sample Input
// 371
// Sample Output
// true
// Explanation
// Use functions. Write a function to get check if the number is armstrong number or not. Numbers are armstrong if it is equal to sum of each digit raised to the power of number of digits.