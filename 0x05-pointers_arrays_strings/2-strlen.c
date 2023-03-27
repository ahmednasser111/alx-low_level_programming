#include <stdio.h>

/**
 * _strlen - to get the length of string
 * @s: string
 * Return: int length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
