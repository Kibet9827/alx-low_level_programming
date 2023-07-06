#include <stdio.h>

/**
 * _print_rev_recursion - print the reverse of the string
 * @s: the string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
