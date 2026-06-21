#include <iostream>
using namespace std;
int main()
{
    int num = 1, exp;
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    int flag = 0;
    while (flag != N1)
    {
        exp = 3 * num + 2;
        if (exp % N2 != 0)
        {
            cout << exp << endl;
            flag++;
        }

        num++;
    }
    return 0;
}