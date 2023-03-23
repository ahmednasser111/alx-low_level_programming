#include "main.h"

/**
 * print_most_numbers - a function that prints from 0 to 9 except 2 and 4
 *
 * Return: ...
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
