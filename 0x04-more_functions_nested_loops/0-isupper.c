#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @x: The number to be checked
 * Return: 1 for uppercase letter or 0 for lowercase
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
		return (1);
	}
	return (0);
}
