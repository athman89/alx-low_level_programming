/**
 * strncat - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
