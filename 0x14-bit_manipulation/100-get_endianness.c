#include "main.h"
/**
 * get_endianess - checks if the byte is little-endian or big-endian
 *
 * Rturn: 0 for big 1 for little
 */

int get_endianness(void)
{
	unsigned int i;
	unsigned char *c = (unsigned char *)&i;

	return (*c);
}
