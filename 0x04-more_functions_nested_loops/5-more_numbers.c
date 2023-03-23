#include "main.h"

/**
 * more_numbers - a function that prints from 0 to 14
 *
 * Return: ...
 */
void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		i = 0;
		for (; i < 15; i++)
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
