/**
 * _strstr - gets the length of a prefix substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (0);
}
