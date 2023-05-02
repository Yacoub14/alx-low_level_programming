#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node at a linked list
 * @head: the head of  the linked list
 * @index: the index of the node
 *
 * Return: pointer to the node , if the node does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
		t = t->next;
		j++;
	}

	return (t ? t : NULL);
}
