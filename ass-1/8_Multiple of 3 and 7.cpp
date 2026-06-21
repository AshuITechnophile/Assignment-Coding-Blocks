// Write a program that takes an integer as input and determines whether it is a multiple of both 3 and 7. A number is a multiple of both if it is divisible by both numbers without leaving a remainder.
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   if (n % 21 == 0)
   {
      cout << "Yes";
   }
   else
   {
      cout << "No";
   }

   return 0;
}