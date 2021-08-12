#include "holberton.h"

/**
 * flip_bits - checks how many bits differ between 2 numbers
 * @n: first number
 * @m: second number
 * Return: number of differing bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			flip++;
	}
	return (flip);
}
