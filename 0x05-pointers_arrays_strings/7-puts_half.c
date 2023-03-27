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
	int n = strlen(str), i = n / 2;
	if (n % 2 == 1)
		i++;
	for (; i < n; i++)
		putchar(str[i]);
	putchar('\n');
}
