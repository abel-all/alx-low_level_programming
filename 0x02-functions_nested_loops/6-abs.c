#include "main.h"

/**
 * _abs - check the code.
 * @n: The number to be checked
 *
 * Return: abs that n.
 */

int _abs(int n)
{
	long	nn;

	nn = n;
	if (nn < 0)
		nn *= -1;
	return (nn);
}
