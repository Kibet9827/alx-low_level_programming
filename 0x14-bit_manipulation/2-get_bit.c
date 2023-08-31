#include "main.h"

/**
 * get_bit - returns the value of  a bit at a given index
 *@n: unsigned int to extract bit value
 *@index: the position of bit to extract from
 *
 *Return: the value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
