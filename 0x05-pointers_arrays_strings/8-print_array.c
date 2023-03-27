#include <stdio.h>
#include <string.h>
/**
 * print_array - prints an array
 * @a: array
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		putchar('\n');
		return;
	}
	for (; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d", a[i]);
	putchar('\n');
}
