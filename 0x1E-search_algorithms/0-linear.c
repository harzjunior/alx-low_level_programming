#include "search_algos.h"

/**
 * linear_search - Performs a linear search for a specific value in an integer array.
 * @array: Pointer to the first element of the array to be searched.
 * @size: Number of elements in the array.
 * @value: The value to be searched for.
 * Return: The index of the first occurrence of the value, or -1 if not found.
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
