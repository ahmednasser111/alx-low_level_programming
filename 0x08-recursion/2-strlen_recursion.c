#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: string
 *
 * Return - void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	return 1 + _strlen_recursion(++s);
}
