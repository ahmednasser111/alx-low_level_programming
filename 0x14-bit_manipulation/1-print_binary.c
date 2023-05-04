#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n >= 1)
		print_binary(n / 2);
	putchar(n % 2);
}