#include "main.h"

/**
 * _isalpha - check the code.
 * @c: The number to be checked
 *
 * Return: 1 if c lowecase, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
