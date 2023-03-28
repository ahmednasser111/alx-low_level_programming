#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy a string to another string
 * @dest: string
 * @src: string
 * Return: copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, n = strlen(src);

	for (; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
