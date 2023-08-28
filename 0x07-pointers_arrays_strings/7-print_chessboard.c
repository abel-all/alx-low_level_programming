#include <unistd.h>

/**
 * _putchar - gets the length of a prefix substring
 * @c: string containing the characters to match
 *
 * Return: nothing
 */


void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_chessboard - gets the length of a prefix substring
 * @a: string containing the characters to match
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
