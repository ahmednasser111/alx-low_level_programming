#include "main.h"
/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: a binary number
 *
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = _strlen(b), uint = 0, i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			uint += 1 << i;
	}
	return (uint);
}
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}