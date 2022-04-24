#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	const unsigned char *p1 = ( const unsigned char * )s1;
	const unsigned char *p2 = ( const unsigned char * )s2;
	while ( *p1 && *p1 == *p2 )
	{
	++p1, ++p2;
	}
	return ( *p1 > *p2 ) - ( *p2  > *p1 );
}
