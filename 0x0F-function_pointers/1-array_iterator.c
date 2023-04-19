#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an integer array
 * @array: pointer to integer array
 * @size: size of array
 * @action: pointer to function that takes an integer argument and returns void
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
		for (; i < size; i++)
			action(array[i]);
}
