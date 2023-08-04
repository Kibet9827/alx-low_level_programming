#include "main.h"

/**
 * binary_to_uint - function that returns unsigned int from binary
 * @b: pointer to string of 0 and 1 char
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

		if (!b)
		{
			return (0);
		}
		for (i = 0; b[i]; i++)
		{
			result = 2* result + (b[i] - '0');
		}

		return (result);
}

