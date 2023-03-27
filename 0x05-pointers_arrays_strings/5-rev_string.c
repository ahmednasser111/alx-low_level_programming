#include <stdio.h>

/**
 * rev_string - get a string in reverse order
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0, i = 0;
	char *sb = *s;

	while (*s)
	{
		n++;
		s++;
	}
	for (; i < n / 2; i++)
	{
		*(sb + i) = *(sb - n - i - 1);
	}
	putchar('\n');
}
