#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array to be searched
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of matching array element, -1 upon failure
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
