#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: string
 *
 * Return - void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(++s);
	putchar(*s);
}
