#include <stdio.h>
#include "main.h" 
/** main - Entry point
 *
 * Return: Always 0 (Success)
 */
void testIt()
{
	int n;
	if (n > 0)
		
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}