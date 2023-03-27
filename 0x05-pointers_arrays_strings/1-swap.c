#include <stdio.h>

/**
 * swap_int - swap two integers a and b
 * @a: number one
 * @b: number two
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
