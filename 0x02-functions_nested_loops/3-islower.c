#include "main.h"

/**
 * _islower - check the code.
 * @c: The number to be checked
 *
 * Return: 1 if c lowecase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
