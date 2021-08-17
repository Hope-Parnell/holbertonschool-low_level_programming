#include "holberton.h"
#include <stdarg.h>
int print_exit(int exit_number, char *filename, int fd);

/**
 * main - copies the content of one file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, fr, fw = 0, fc;
	char buffer[1024];

	if (argc != 3)
		exit(print_exit(97, NULL, 0));
	file_from = open(argv[1], O_RDONLY);
	if (!argv[1])
		exit(print_exit(98, argv[1], 0));
	if (file_from < 0)
		exit(print_exit(98, argv[1], file_from));
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to < 0)
	{
		fc = close(file_from);
		if (fc != 0)
			exit(print_exit(100, argv[1], file_from));
		exit(print_exit(99, argv[2], file_to));
	}
	while ((fr = read(file_from, buffer, 1024)) && fr > 0 && fw >= 0)
		fw = write(file_to, buffer, fr);
	fc = close(file_from);
	if (fc < 0)
		exit(print_exit(100, argv[1], file_from));
	fc = close(file_to);
	if (fc < 0)
		exit(print_exit(100, argv[2], file_to));
	if (fw < 0)
		exit(print_exit(99, argv[2], file_to));
	if (fr < 0)
		exit(print_exit(98, argv[1], file_from));
	return (0);
}

/**
 * print_exit - prints error messages for exit codes
 * @exit_number: exit code for error
 * @filename: name of the file
 * @fd: file descriptor
 *
 * Return: exit code
 */

int print_exit(int exit_number, char *filename, int fd)
{
	switch (exit_number)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		break;
	default:
		break;
	}
	return (exit_number);
}