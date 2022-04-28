#include "main.h"

/**
 * factorial of a given number
 * @n: input
 * return -1 if less than 0
 * return 1 when equal to zero
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
