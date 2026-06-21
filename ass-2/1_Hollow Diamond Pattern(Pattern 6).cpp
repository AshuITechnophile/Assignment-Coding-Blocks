/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * * */

#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int star = n / 2 + 1;
     int space = -1;
     // left star patter
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= star; j++)
          {
               cout << "* ";
          }
          // middle space
          for (int k = 1; k <= space; k++)
          {
               cout << "  ";
          }
          int rightstar = star;
          if (i == 1 || i == n)
          {
               rightstar = star - 1;
          }
          for (int j = 1; j <= rightstar; j++)
          {
               cout << "* ";
          }
          cout << endl;
          if (i <= n / 2)
          {
               star--;
               space += 2;
          }
          else
          {
               star++;
               space -= 2;
          }
     }
     return 0;
}