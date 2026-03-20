// Take the following as input.

// Minimum Fahrenheit value
// Maximum Fahrenheit value
// Step

// Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37
#include <iostream>
using namespace std;
int main()
{
    int min_f;
    cin >> min_f;
    int max_f;
    cin >> max_f;
    int step;
    cin >> step;
    int c;
    while (min_f <= max_f)
    {
        c = (min_f - 32) * 5 / 9;
        cout << min_f << " " << c << endl;
        min_f = min_f + step;
    }
    return 0;
}
// Sample Input
// 0
// 100
// 20
// Sample Output
// 0 -17
// 20 -6
// 40 4
// 60 15
// 80 26
// 100 37