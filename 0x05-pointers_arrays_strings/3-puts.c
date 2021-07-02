#include "holberton.h"

/**
 * _puts - prints a string followed by a newline
 * @str: a string of characters
 *
 * Return:
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
