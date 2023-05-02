#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at a certain index
 * @head: pointer to the head of  the list
 * @index: index of the node tath should be deleted
 *
 * Return: 1 if it is Success, or -1 if it is Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m = *head;
	listint_t *c = NULL;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(m);
		return (1);
	}

	while (e < index - 1)
	{
		if (!m || !(m->next))
			return (-1);
		m = m->next;
		e++;
	}


	c = m->next;
	m->next = c->next;
	free(c);

	return (1);
}
