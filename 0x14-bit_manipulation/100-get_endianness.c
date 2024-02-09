#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Description: This function checks the endianness of the system.
 *
 * Return: Integer value
 */

int get_endianness(void)
{
	unsigned int i;

	return ((int)(((char *)&i)[0]));
}
