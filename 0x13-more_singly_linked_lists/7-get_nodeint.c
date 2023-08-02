#include "lists.h"

/**
 * get_nodeint_at_index - function that gets a nth node in a linked list
 * @head:first node in a linked list
 * @index: index of the node to return
 * @current: current node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);

}
