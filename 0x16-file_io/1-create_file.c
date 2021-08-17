#include "holberton.h"

/**
 * create_file - creates a file and writes to the newly created file
 * @filename: name of the file to be created
 * @text_content: what to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw, l;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (l = 0; text_content[l] != '\0'; l++)
	;
	fw = write(fd, text_content, l);
	close(fd);
	if (fw < 0)
		return (-1);
	return (1);
}
