#include "holberton.h"

/**
 * reverse_array - reverses the content of an int array
 * @a: pointer to the array
 * @n: number of items in the array
 *
 * Return:
 */

void reverse_array(int *a, int n)
{
	int i, store;

	for (i = 0; i < n;  i++)
	{
		n--;
		store = a[i];
		a[i] = a[n];
		a[n] = store;
	}
}
