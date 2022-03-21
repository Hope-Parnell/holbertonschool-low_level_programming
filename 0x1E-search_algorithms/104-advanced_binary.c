#include "search_algos.h"

/**
 * binarySearch - advanced binary search, recursively
 * @array: the array being searched
 * @start: index to start the search
 * @end: index to end the search
 * @value: value being searched for
 * Return: -1 if value not found, or the index of the first instance found
 */

int binarySearch(int *array, int start, int end, int value)
{
	int i, mid;

	if (end >= start)
	{
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = start + (end - start) / 2;

		if (array[mid] == value)
		{
			if (array[mid - 1] == value && mid != 0)
				return (binarySearch(array, start, mid, value));
			return (mid);
		}
		if (array[mid] > value)
			return (binarySearch(array, start, mid, value));

		return (binarySearch(array, mid + 1, end, value));
	}

	return (-1);
}

/**
 * advanced_binary - entrance function for an advanced binary search algo
 * @array: the array being searched
 * @size: the size of the array
 * @value: the value being searched for
 * Return: the index where the value is found, -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binarySearch(array, 0, size - 1, value));
}
