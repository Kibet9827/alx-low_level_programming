#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - function that reads text file
 *
 *@filename: the text file
 *@letters: number of letter to be read
 *Return: res - number of bytes read and printed
 *        0 when function fails or filename is null
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t res;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	res = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (res);
}
