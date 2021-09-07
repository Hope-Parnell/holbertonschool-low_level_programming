#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: pointer to the list
 * @n: integer value to store in the node
 *
 * Return: pointer to new node, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)/*no current nodes*/
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tail = *head;
		while (tail->next)/*find the tail*/
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
	}
	return (new);
}
