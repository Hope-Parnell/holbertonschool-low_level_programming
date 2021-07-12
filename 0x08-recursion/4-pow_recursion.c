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
