#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer that points to the first node in the list
 *
 * Return: the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL ;
listint_t *nx = NULL;

while (*head)
{
nx = (*head)->next;
(*head)->next = p;
p = *head;
*head = nx;
}

*head = p;

return (*head);
}
