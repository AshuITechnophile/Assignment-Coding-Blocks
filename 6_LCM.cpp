#include <iostream>
#include <algorithm>
using namespace std;
int Lcm(int N1, int N2)
{
   int Hcf = __gcd(N1, N2);
   int lcm = N1 * N2 / Hcf;
   return lcm;
}
int main()
{
   int N1;
   cin >> N1;
   int N2;
   cin >> N2;
   cout << Lcm(N1, N2);
   return 0;
}