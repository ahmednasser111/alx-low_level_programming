#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenation of two strings
 * @dest: string one
 * @src: string two
 *
 * Return: A pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	while (dest[n])
		n++;
	for (int i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
