#include "holberton.h"
/**
 * print_square - prints a square of the specified size
 * @size: size of the square
 *
 * Return:
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
