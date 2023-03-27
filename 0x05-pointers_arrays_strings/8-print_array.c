#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * print_array - prints an array
 * @a: array
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		printf("%d", a[i]);
	putchar('\n');
}