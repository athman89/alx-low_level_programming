#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
