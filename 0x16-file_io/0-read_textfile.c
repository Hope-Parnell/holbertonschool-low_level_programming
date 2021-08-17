#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: relative or absolute path to the file
 * @letters: number of letters to read and print
 *
 * Return: number of characters printed or 0 upon failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t fr, fw;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	fr = read(fd, buffer, letters);
	if (fr < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	fw = write(STDOUT_FILENO, buffer, fr);
	if (fw < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (fw);
}
