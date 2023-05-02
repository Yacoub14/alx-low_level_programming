#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer that points to the first element in the list
 * @n: to insert in the new element
 *
 * Return: the address of the new element , or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *t = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (t->next)
		t = t->next;

	t->next = w;

	return (w);
}
