#include "main.h"

/**
 * print_line - a function that prints n number of _
 * @n: input
 * Return: ...
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
