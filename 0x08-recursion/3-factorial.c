#include <stdio.h>

/**
 * factorial - prints the factorial of a number
 * @n: number to return factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
