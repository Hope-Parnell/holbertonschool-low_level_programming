#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: a number
 *
 * Return: 1 if n is positive, 0 if n is 0, -1 if n is negative
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
