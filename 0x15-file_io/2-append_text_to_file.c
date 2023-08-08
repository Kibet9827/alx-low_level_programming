#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
