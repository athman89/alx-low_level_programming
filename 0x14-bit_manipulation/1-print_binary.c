#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - Entry Point
 * @n: dec input
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int j = 0;
	int counts, l, temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;

	while (temp != 0)
	{
		j++;
		temp = temp >> 1;
	}

	for (counts = j - 1; counts >= 0; counts--)
	{
		l = n >> counts;
		if (l & 1)
			printf("1");
		else
			printf("0");
	}
}
