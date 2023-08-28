/**
 * print_diagsums - gets the length of a prefix substring
 * @a: string containing the characters to match
 * @size: string containing the characters to match
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
