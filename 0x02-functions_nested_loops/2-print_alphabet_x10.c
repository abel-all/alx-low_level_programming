#include "main.h"

/**
 * print_alphabet - program that display _putchar
 *
 * print_alphabet_x10 - program that display _putchar
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

void print_alphabet_x10(void)
{
	int	i;

	i = -1;
	while (++i < 10)
		print_alphabet();
}
