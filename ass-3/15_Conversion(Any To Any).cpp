// Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sb;
    cin >> sb;
    int db;
    cin >> db;
    int sn;
    cin >> sn;
    int sum = 0;
    int sb_count = 0;
    int db_count = 0;
    while (sn > 0)
    {
        int rev = sn % 10;
        sum = sum + rev * pow(sb, sb_count);
        sn /= 10;
        sb_count++;
    }
    int dn = 0;
    while (sum > 0)
    {
        int rev = sum % db;
        dn = dn + rev * pow(10, db_count);
        sum /= db;
        db_count++;
    }
    cout << dn;
    return 0;
}
// Sample Input
// 8
// 2
// 33
// Sample Output
// 11011
// Explanation
// All input output is as integers and in separate lines.