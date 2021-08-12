#include "holberton.h"
/**
 * print_number - prints an intger one digit at a time
 *
 * Return:
 */

void print_number(int n)
{
	if (n == 0)
		return;
	print_numbers(n / 10);
	_putchar(n % 10 + '0');
}
