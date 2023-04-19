#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
		for (; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
