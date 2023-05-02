#include "lists.h"

/**
 * add_nodeint - a new node to be adds at the beginning of a linked list
 * @head: pointer that points to the first node in the list
 * @n: to insert in that new node
 *
 * Return: the address of the new element , or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
