#include "main.h"
/**
 * swap_int - function that swaps the pointers of the integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
