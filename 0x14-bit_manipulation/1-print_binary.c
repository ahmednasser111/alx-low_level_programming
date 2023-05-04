#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	if (n < 0)
		return;
	print_binary(n >> 1);
	if (n & 1)
		putchar('1');
	else
		putchar('0');
}
