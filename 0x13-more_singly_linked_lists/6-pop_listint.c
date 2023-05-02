#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer that points to the first element in the linked list
 *
 * Return: the head node’s data ,
 * if the list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (m);
}
