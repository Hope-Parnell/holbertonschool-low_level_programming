#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc);
	return (0);
}
