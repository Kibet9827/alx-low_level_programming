#include "main.h"

/**
 * binary_to_uint - function that returns unsigned int from binary
 * @b: pointer to string of 0 and 1 char
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int int_val = 0;
	int i;

		if  (!b)
		{
			return (0);
		}
		for (i = 0; b[i]; i++)
		{
			if (b[i] < '0' || b[i] > '1')
				return (0);
			int_val = 2 * int_val + (b[i] - '0');
		}

		return (int_val);
}

