#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first number
 * @max: last number
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}

	return (a);
}
