#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of size and assigns char c
 * @size: size of array to be created
 * @c: char to assign
 * Return: pointer to arryy, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
