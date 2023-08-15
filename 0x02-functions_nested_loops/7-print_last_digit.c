#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: The number to be checked
 *
 * Return: n.
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n + 48);
	return (n);
}
