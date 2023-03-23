#include "main.h"

/**
 * print_diagonal - a function that prints n number of _
 * @n: input
 * Return: ...
 */
void print_diagonal(int n)
{
	int i = 0, j;

	for (; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
