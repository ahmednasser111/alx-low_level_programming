#include "main.h"
/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char c = 'a';

		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
