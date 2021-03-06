#include "holberton.h"
/**
 * times_table -  prints the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int p;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar(p + '0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
