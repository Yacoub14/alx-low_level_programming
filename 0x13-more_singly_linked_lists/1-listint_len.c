#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: linked list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}

	return (nbr);
}
