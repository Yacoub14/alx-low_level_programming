#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a given position ,
 *
 * @head: pointer that points to the first node in the list
 * @idx: index where the new node should be added
 * @n: data to insert
 *
 * Return: pointer to the new node, echec : returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nw;
	listint_t *p = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (j = 0; p && j < idx; j++)
	{
		if (j == idx - 1)
		{
			nw->next = p->next;
			p->next = nw;
			return (nw);
		}
		else
			p = p->next;
	}

	return (NULL);
}
