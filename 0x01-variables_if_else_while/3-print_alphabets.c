#include <stdio.h>

/**
 * main - display alphaBET
 *
 * Return: 0
 */
int main(void)
{
	int	i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
