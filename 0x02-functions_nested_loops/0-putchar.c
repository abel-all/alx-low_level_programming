#include "main.h"

/**
 * main - program that display _putchar
 *
 * Return: 0 success
 */

int main(void)
{
	char	*str;
	int		i;

	str = "_putchar";
	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
