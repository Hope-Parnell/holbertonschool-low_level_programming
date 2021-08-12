#include "holberton.h"

/**
 * _pow_recursion - calculates exponents
 * @x: an integer
 * @y: expontent
 *
 * Return: x to the y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: string containing a number in binary
 * Return: converted unsigned int, 0 on invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, j = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] == '1')
			n +=  _pow_recursion(2, j);
		j++;
	}
	return (n);
}
