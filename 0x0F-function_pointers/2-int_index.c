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
	int i = 0, ret;

	if (size < 1)
		return (-1);
	if (array != NULL && cmp != NULL)
		for (; i < size; i++)
		{
			ret = cmp(array[i]);
			if (ret)
				return (ret);
		}
}
