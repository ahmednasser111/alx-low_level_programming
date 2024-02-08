#include "main.h"

/**
 * get_endianness -
 * void
 *
 * Return: Integer value
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *)&n) + '0');
}
