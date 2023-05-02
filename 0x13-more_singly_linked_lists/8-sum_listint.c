#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data in a list
 * @head: the linked list’s first node
 *
 * Return: resulting sum , if the list is empty returns 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
