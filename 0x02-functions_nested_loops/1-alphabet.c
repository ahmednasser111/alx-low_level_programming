#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
