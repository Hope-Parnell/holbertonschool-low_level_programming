#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the funtion
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
