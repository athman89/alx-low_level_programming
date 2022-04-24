#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char *s1)
{
	int i;
	for (i = 0; s1[i]!='\0'; i++) 
	{
	if(s1[i] >= 'a' && s1[i] <= 'z')
	{
         s1[i] = s1[i] - 32;
	}
	}
	return s1;
}
