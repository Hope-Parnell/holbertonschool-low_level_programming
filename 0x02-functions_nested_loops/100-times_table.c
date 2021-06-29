#include "holberton.h"
void print100s(int p);
void print10s(int p);
void print1s(int p);
/**
 * print_times_table -  prints the times table for n if n<15
 * @n: any input number
 *
 * Return:
 */

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
				{
					_putchar(p + '0');
				}
				else if (p < 10)
				{
					print1s(p);
				}
				else if (p < 100)
				{
					print10s(p);
				}
				else
				{
					print100s(p);
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print100s -  prints a number <= 100 for times table one character at a time
 * @p: number you want to print
 *
 * Return:
 */

void print100s(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar((p / 100) + '0');
	_putchar(((p / 10) % 10) + '0');
	_putchar((p % 10) + '0');
}
/**
 * print10s -  prints a number <= 10 for times table one character at a time
 * @p: number you want to print
 *
 * Return:
 */

void print10s(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((p / 10) + '0');
	_putchar((p % 10) + '0');
}
/**
 * print1s -  prints a single digit for times table one character at a time
 * @p: number you want to print
 *
 * Return:
 */

void print1s(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(p + '0');
}
