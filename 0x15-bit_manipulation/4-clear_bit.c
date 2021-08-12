#include "holberton.h"

/**
 * clear_bit - sets a specific bit to 0
 * @n: number to set the bit in
 * @index: where to set the bit
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= 64)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
