#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints input strings
 * @separator: the string to be printed between the strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list str;

	if (n == 0)
		return;
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (i != (n - 1))
		{
			if (s == NULL)
				s = "(nil)";
			if (separator != NULL)
				printf("%s%s", s, separator);
			else
				printf("%s", s);
		}
		else
		{
			printf("%s\n", s);
		}
	}
	va_end(str);
}
