#include "main.h"

/**
 * print_square - a function that prints a square using the character #
 * @size: input
 * Return: ...
 */
void print_square(int size)
{
	int i = 0, j;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
