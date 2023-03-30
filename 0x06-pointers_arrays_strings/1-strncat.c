#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenation of two strings
 * @dest: string one
 * @src: string two
 * @n: size
 *
 * Return: A pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;
	for (; i < n && src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
