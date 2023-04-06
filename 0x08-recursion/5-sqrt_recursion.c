#include <stdio.h>
#include "main.h"
/**
 * _sqrt - sqrt helper
 * @n: number
 * @i: iterator
 * Return: sqrt checker
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns sqrt of n
 * @n: number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
