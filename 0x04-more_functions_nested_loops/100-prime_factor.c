/* C Program to find largest prime*/
/* factor of number*/
#include <math.h>
#include <stdio.h>
 

unsigned long maxPrimeFactors(unsigned long n)
{
    
    unsigned long maxPrime = -1;
    int i;
    
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; 
    }
    
    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
 
    
    for ( i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
 
     
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}
 

int main()
{
    unsigned long n;
    printf("Enter a number: \n");
    scanf("lu\n",&n);
    printf("The largest factor is: \n", maxPrimeFactors(n));
 
    return 0;
}
