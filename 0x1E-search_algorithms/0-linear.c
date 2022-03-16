#include "search_algos.h"

/**
 * linear_search - performs a linear search
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: Index where the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
