#include <stdio.h>

/**
 * print_rev - prints a string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	while (n--)
		putchar(*(--s));
	putchar('\n');
}
