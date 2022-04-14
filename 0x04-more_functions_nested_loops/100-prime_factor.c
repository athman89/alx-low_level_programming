/* C Program to find the factor of a Number using a Function */
 
#include <stdio.h>
 
void primeFactors(unsigned long n)
{
  unsigned long c = 2;
  while (n > 1) {
    if (n % c == 0) {
      printf("%lu ", c);
      n /= c;
    }
    else
      c++;
  }
}
 
/* Driver code */
int main()
{
  unsigned long n;
  printf("Enter any number to print Prime factors: ");
    scanf("%lu", &n);
  primeFactors(n);
  return 0;
}
