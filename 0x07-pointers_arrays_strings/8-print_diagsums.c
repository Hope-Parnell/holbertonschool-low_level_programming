#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a matrix
 * @a: location of the matrix
 * @size: size of the matrix
 *
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1, d2, n;

	d1 = 0;
	d2 = 0;
	n = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				d1 += *((a + i * size) + j);
			if (i + j == n)
				d2 += *((a + i * size) + j);
		}
	}
	printf("%d, %d\n", d1, d2);
}
