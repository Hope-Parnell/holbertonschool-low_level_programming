#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints stuff
 * @format: abreviations for each type of data to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0, skip;
	char *str;
	va_list print;

	va_start(print, format);
	while (format != NULL && format[i] != '\0')
	{ skip = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(print, int));
			break;
		case 'i':
			printf("%d", va_arg(print, int));
			break;
		case 'f':
			printf("%f", va_arg(print, double));
			break;
		case 's':
			str = va_arg(print, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			skip = 1;
			break; }
		i++;
		while (skip == 0 && format[i] != '\0')
		{
			switch (format[i])
			{ case 'c': case 'i': case 'f': case 's':
			{	printf(", ");
				skip = 1;
				break; }
			default:
				i++;
				break; }}}
	printf("\n");
	va_end(print); }
