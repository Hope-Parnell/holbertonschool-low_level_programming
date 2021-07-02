#include "holberton.h"

/**
 * print_rev - prints a string backwards
 * @s: a string of characters
 *
 * Return:
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	for (i--; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
