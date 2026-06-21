/*Write a program that takes an integer representing a month number (1 to 12) and prints the corresponding month name.

1: January

2: February

3: March

4: April

5: May

6: June

7: July

8: August

9: September

10: October

11: November

12: December*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "Feburary";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        break;
    }
    return 0;
}