// Take the following as input.
// A number
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

// Write a function that returns its inverse, where inverse is defined as follows

// Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

// Print the value returned.
#include <iostream>
#include <vector>
using namespace std;
vector<int> counter(int n)
{
    vector<int> number;
    while (n > 0)
    {
        int rev = n % 10;
        number.push_back(rev);
        n /= 10;
    }
    return number;
}
int main()
{
    int n;
    cin >> n;
    vector<int> num(counter(n));
    vector<int> ans(num.size() + 1);
    for (int i = 0; i < num.size(); i++)
    {
        ans[num[i]] = i + 1;
    }
    for (int i = num.size(); i >= 1; i--)
    {
        cout << ans[i];
    }
    return 0;
}
// Sample Input
// 32145
// Sample Output
// 12543
// Explanation
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.