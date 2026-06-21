/*Write a program that takes an integer representing a day number (1 to 7) and prints the corresponding day name. Assume the week starts with Monday.

1: Monday

2: Tuesday

3: Wednesday

4: Thursday

5: Friday

6: Saturday

7: Sunday8*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Mouday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thusday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        break;
    }
    return 0;
}