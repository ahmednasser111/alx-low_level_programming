#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - returns power of a number to a number
 * @x: number
 * @y: power
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		reutrn (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
