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

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s)
		if (separator != NULL && i < (n - 1)) 
			printf("%s", separator);
	}
	printf("\n")
	va_end(str);
}
