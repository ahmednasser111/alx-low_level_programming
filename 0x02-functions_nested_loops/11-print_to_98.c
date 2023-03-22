#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i = 1;

	if (n > 98)
		i = -1;
	while (n != 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n += i;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
