#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 *
 * Return: ...
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n > 9)
			{
				_putchar(n % 100 / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
