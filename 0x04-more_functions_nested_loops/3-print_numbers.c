#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: ...
 */
void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
