#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print the array in reverse
 * @a: array
 * @n: size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
