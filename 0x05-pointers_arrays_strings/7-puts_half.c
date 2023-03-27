#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * puts_half - prints a half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, n = strlen(str);
	n -= n & 1 ? 1 : 0;
	for (i = n / 2; i < n; i++)
		putchar(str[i]);
	putchar('\n');
}
