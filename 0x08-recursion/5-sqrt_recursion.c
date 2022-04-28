#include "main.h"
long int squareroot(long int n, long int i);
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
long int _sqrt_recursion(long int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
long int squareroot(long int n, long int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
