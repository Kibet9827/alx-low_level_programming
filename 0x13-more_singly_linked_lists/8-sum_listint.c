#include "lists.h"
/**
 * sum_listint - function that prints the sum of data in the linked list
 * @head: first node in the linked list
 *
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while(temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
