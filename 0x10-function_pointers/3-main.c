#include "3-calc.h"

/**
 * main - calculator
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0 on success
 * 98 if wrong number of args
 * 99 if invalid opertator
 * 100 if dividing or mod by 0
 */

int main(int argc, char *argv[])
{
	int result, a, b;
	char o = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1 || (o != '+' && o != '-' && o != '*'
		&& o != '/' && o != '%') || argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (o == '/' || o == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
