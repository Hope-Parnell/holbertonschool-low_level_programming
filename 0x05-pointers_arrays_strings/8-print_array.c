#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n items from an array
 * @a: pointer to an array
 * @n: number of items to be printed
 *
 * Return:
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	if (n <= 0)
		_putchar('/n');
}
