#include "holberton.h"

/**
 * set_bit - sets a specific bit to 1
 * @n: number to set the bit in
 * @index: where to set the bit
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= 64)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
