#include <stdio.h>

/**
 * _puts2 - prints a string
 * @str: string
 * Return: void
 */
void _puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
