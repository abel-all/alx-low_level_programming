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
 * _strpbrk - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
		if (_inCharSet(s[i++], accept))
			return (s + i - 1);
	return (0);
}
