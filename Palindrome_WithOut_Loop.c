#include <stdio.h>

int main ()
{
  // Write C code here
  int n, d5, d4, d3, d2, d1, rev = 0;
  int temp;

  printf ("Enter the Number :");
  scanf ("%d", &n);
  temp = n;
  d5 = n % 10;
  rev = rev * 10 + d5;
  n = n / 10;
  d4 = n % 10;
  rev = rev * 10 + d4;
  n = n / 10;
  d3 = n % 10;
  rev = rev * 10 + d3;
  n = n / 10;
  d2 = n % 10;
  rev = rev * 10 + d2;
  n = n / 10;
  d1 = n % 10;
  rev = rev * 10 + d1;
  n = n / 10;


  if (temp == rev)
    {
      printf ("This is Palindrome Number\n");
    }
  else
    {
      printf ("This is Not a Palindrome Number\n");
    }

  return 0;
}
