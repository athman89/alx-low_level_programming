#include "main.h"
/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	for (int i = 0; i < n/2; i++)
	{
	int temp = arr[i];
	arr[i] = arr[n - 1 - i];
	arr[n - 1 - i] = temp;
	}
}
