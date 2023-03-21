#include "main.h"
/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
