#include "main.h"
/**
 * jack_bauer - Prints from 00:00 to 23:59
 *
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int i, j, k, q;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (q = 0; q <= 9; q++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(q + '0');
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && q == 9)
						return;
				}
			}
		}
	}
}
