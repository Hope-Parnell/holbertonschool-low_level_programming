#include "holberton.h"
/**
 * print_line - prints a line of specified length
 * @n: length of the line
 *
 * Return:
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
			_putchar('_');
	}
	_putchar('\n');
}
