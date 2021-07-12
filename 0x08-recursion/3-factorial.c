#include "holberton.h"

/**
 * factorial - finds the factorial of a number
 * @n: a positive integer
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
