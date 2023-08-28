/**
 * _memcpy - prints buffer in hexa
 * @dest: the char pointer
 * @src: the char
 * @n: the size of the memory
 *
 * Return: the final char pointer.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (0);
	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
