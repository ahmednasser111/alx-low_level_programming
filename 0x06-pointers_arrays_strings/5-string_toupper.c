#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - uppercase the string
 * @s: string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; i < strlen(s); i++)
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	return (s);
}
