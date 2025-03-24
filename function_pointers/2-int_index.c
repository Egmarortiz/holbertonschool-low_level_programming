#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: pointer to the array of integers.
 * @size: number of elements in the array.
 * @cmp: pointer to the function used to compare values.
 *
 * Return: the index of the first element for which cmp returns non-zero,
 *         or -1 if no element matches or if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

