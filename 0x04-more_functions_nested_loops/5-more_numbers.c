#include "main.h"

/**
 * more_numbers - a function that prints from 0 to 14
 *
 * Return: ...
 */
void more_numbers(void)
{
	int i = 0;

	print_numbers();
	for (; i < 5; i++)
	{
		_putchar('1');
		_putchar(i + '0');
	}
	_putchar('\n');
}
