#include "main.h"
/**
 * copy - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int j;
	while(dest[length] != '\0')

	{
	++length;
	}
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
	dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
