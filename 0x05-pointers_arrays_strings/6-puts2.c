#include "holberton.h"

/**
 * puts2 - prints every other character of a string followed by a newline
 * @str: a string of characters
 *
 * Return:
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
