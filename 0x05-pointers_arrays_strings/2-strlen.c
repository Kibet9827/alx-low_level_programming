#include "main.h"

/**
 * _strlen - function that checks the length of a string
 *
 * @s: the pointer representing the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
