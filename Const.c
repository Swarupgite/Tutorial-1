#include<stdio.h>

int main()
{
  int X = 11;

  const int Y = 11;  // Read Only Variable

   X++;   //Allowed
   X--;
   X = 21;

   // Y++;    // Not Allowed
   // Y--;
   // Y = 21;

    return 0;
}