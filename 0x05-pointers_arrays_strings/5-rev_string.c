#include <stdio.h>
#include <string.h>

/**
 * rev_string - get a string in reverse order
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int n = strlen(s), i = 0;
	char temp;

	for (; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
