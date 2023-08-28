/**
 * _memset - prints buffer in hexa
 * @s: the char pointer
 * @c: the char
 *
 * Return: the final char pointer.
 */

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
