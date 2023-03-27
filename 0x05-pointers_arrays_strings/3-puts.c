#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(str);
		str++;
	}
	putchar('\n');
}
