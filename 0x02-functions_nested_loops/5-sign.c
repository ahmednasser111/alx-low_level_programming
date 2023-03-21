#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */
int print_sign(int n)
{
	if (n == 0){
		_putchar('0');
		return (0);
	}
	if (n > 0){
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
