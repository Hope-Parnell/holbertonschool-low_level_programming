#include "holberton.h"
/**
 * swap_int - swaps the values of 2 int variables
 * @a: pionter to 1st integer
 * @b: pointer to 2nd integer
 *
 * Return:
 */

void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
