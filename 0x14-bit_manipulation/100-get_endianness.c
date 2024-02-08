#include "main.h"

/**
 * get_endianness -
 *
 *
 * Return: Integer value
 */

int get_endianness(void)
{
	unsigned int i;

	return ((int)(((char *)&i)[0]));
}
