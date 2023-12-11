#include "search_algos.h"

/**
 * interpolation_search - Applies the Interpolation search algorithm to find a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to be searched.
 * @size: Number of elements in the sorted array.
 * @value: The value to be searched for.
 * Return: The index of the first occurrence of the value, or -1 if not found.
**/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
