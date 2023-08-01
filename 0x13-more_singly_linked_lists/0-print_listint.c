#include "lists.h"

/**
 * print_listint - prints int data in a singly linked list
 * @h: pointer to the list.h to print
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
	return (0);

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);

}

