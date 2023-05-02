#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer that points to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (head == NULL)
		return;

	while (*head)
	{
		tm = (*head)->next;
		free(*head);
		*head = tm;
	}

	*head = NULL;
}
