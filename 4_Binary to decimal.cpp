#include <iostream>
#include <cmath>
using namespace std;
int binary_to_decimal(int n)
{
   int bin = 0, g = 0, rem;
   while (n != 0)
   {
      rem = n % 10;
      n = n / 10;
      bin = bin + rem * pow(2, g);
      g++;
   }
   return bin;
}
int main()
{
   int n;
   cin >> n;
   cout << "This is the binary number = " << binary_to_decimal(n);
   return 0;
}