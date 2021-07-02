#include "holberton.h"

/**
 * puts_half -prints the latter half of a string
 * @str: pointer to a string
 *
 * Return:
 */

void puts_half(char *str)
{
	int l, i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	l = i;
	for (i = (l - 1) / 2 + 1; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
