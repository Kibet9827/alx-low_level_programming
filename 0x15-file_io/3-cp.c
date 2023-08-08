#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);
/**
 *create_buffer - function that assigns 1024 bytes to a buffe
 *
 *@filename: the file the buffer is storing chars for
 *Return: a pointer to the new buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);

}
/**
 * close_file - function that closes the file descriptor
 *
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, 
				"Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - copies contents of one file to another file
 *
 * @argc: number of command-line arguments passed in the program
 *
 * @argv: array of pointers that carries no of arguments passed
 *
 * Return: 0 on success
 *
 *
 * Description: if the argument count is incorrect - exit code 97.
 * if file_from does not exist or cannot be read - exit code 98.
 * if file_to cannot be written to or created - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int to, from;
	int w;
	int r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY |  O_APPEND);

	} while (r > 0);


	free(buffer);
	close_file(from);
	close_file(to);


	return (0);
}
