#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
