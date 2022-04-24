#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
	int res = ((*s1 == 0) || (*s1 != *s2));
	if  (__builtin_expect((res),0))
	{
	break;
	}
	++s1;
	++s2;
	}
	return (*s1 - *s2);
}
