/**
 * _memset - prints buffer in hexa
 * @s: the char pointer
 * @b: the char
 * @n: the size of the memory
 *
 * Return: the final char pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
