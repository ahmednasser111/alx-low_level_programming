#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (; i < (int) strlen(str); i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
