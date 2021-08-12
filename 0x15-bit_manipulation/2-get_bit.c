#include "holberton.h"

/**
 * get_bit - finds the bit at a given index
 * @n: a number
 * @index: which bit to find
 * Return: bit of n at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
