#include "holberton.h"

/**
 * append_text_to_file - adds text to the end of a file
 * @filename: name of the file to add to
 * @text_content: text to add
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, l;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
