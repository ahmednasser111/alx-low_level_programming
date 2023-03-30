#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy a string to another
 * @dest: string one
 * @src: string two
 * @n: size
 *
 * Return: A pointer to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
