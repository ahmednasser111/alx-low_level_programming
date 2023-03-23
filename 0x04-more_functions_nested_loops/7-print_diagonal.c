#include "main.h"

/**
 * print_diagonal - a function that prints n number of _
 * @n: input
 * Return: ...
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n < 1)
		_putchar('\n');
	for (; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		_putchar('\n');
	}
}
