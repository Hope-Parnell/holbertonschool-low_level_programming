#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to the way to print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
