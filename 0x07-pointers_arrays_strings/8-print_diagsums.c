#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sum
 * @a: array
 * @size: size of array
 *
 * Return - void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[size - i - 1][size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
