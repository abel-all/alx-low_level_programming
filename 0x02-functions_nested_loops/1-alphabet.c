#include "main.h"

/**
 * print_alphabet - program that display _putchar
 *
 * Return: no return value void
 */

void print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
		_putchar(i++);
	_putchar('\n');
}

