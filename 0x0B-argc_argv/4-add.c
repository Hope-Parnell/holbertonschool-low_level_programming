#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the sum of the arguments
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 1 if there is an error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		for (j = 0; ptr[j] != 0; j++)
		{
			if (ptr[j] < '0' || ptr[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
