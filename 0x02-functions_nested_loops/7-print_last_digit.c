#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *@n: The number to be treated
 *
 *  Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
