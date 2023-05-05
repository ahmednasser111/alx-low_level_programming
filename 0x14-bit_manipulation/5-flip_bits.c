#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, i = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			i++;
		mask >>= 1;
	}
	return (i);
}
