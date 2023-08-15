#include "main.h"

/**
 * main - check the code.
 *
 * Return: 1 if c lowecase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
