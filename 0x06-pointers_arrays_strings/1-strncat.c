#include "main.h"
/**
 * strncat - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src,int n)
{
	int length = 0;
	int dest_len;
	int i;
	while(dest[length]!='\0')
	{
	++length;
	}
	dest_len = length;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return dest;
}
