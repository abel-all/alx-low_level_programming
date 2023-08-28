/**
 * _inCharSet - checks if a character is in a set of characters
 * @c: character to be checked
 * @accept: string containing the characters to match
 * Return: 1 if c is in accept, 0 otherwise
 */
int _inCharSet(char c, char *accept)
{
	int i = 0;

	while (accept[i])
		if (c == accept[i++])
			return (1);
	return (0);
}
/**
 * _strspn - prints buffer in hexa
 * @s: the char pointer
 * @accept: the char
 *
 * Return: the final uint.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && _inCharSet(s[i], accept))
		i++;
	return (i);
}
