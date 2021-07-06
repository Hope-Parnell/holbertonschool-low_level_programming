#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int i, l, n, sign;
   
	n = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
			sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + (s[i] - '0');
	}
	n = n * sign;
	return (n);
}
