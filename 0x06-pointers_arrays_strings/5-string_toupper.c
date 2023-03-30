#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - uppercase the string
 * @p: string
 *
 * Return: string
 */
char *string_toupper(char *p)
{
	int i = 0, n = strlen(p);

	for (; i < n; i++)
		if (p[i] > 96 && p[i] < 123)
			p[i] -= 32;
	return (p);
}
