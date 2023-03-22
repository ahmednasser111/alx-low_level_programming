#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i = 1;

	if (n > 98)
		i = -1;
	for (; n != 98; n += i)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
