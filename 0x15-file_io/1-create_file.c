#include "main.h"
#include <stdlib.h>
/**
 * create_file - function that creates new file
 * @filename: name of the new file
 *
 * @text_content: null termknated string to write to the file
 *
 * Return: 1 on sucess
 *         -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		for (len = 0; text_content[len];)
			len++;
	fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0644);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	return (-1);


	close(fd);

	return (1);

}
