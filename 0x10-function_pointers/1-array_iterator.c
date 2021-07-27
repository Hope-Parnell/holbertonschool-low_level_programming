#include "function_pointers.h"

/**
 * array_iterator -  executes a function on each element of an array
 * @array: pointer to an array to loop through
 * @size: the size of the array
 * @action: a pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
