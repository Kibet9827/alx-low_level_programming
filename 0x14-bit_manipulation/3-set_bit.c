#include "main.h"

/**
 * set_bit - function that sets value of bit 1
 * at a given index
 *
 * @n: pointer for the number to change
 * @index: index of the bit to set to 1
 *
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
