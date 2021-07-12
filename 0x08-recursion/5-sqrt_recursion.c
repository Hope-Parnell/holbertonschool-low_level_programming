#include "holberton.h"

/**
 * _find_sqrt - finds the square root of a number
 * @n: the integer we want the sqare root of
 * @sqrt: counter for finding the sqare root
 *
 * Return: the sqare root of n
 */

int _find_sqrt(int n, int sqrt)
{
	n -= (1 + (2 * sqrt));
	if (n < 0)
		return (-1);
	if (n == 0)
		return (sqrt + 1);

	return (_find_sqrt(n, ++sqrt));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: an intger
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_find_sqrt(n, 0));

}
