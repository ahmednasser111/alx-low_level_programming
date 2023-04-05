#include <stdio.h>
#include "main.h"
/**
 * _puts_rev_recursion - prints a string in reverse order
 * @s: string
 *
 * Return - void
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_puts_recursion(++s);
	putchar(*s);
}
