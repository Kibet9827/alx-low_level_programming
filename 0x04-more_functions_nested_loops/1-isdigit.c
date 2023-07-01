#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: The number to be checked
 * Return: 1 if character is a digit or 0 if it is otherwise
 */

int _isdigit(int c)
{
	if (c >= 47 && c <= 56)
	{
		return (1);
	}
	return (0);
}

