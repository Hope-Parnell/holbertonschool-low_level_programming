#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of doubly linked list
 *
 * @head: pointer to the list
 * @n: integer value to store in the node
 * Return: pointer to the new node;
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (!*head)/*check if list is empty*/
	{
		new->next = NULL;
	}
	else
	{
		while ((*head)->prev)/*make sure at actual head*/
			*head = (*head)->prev;
		new->next = *head;
	}
	*head = new;
	return (new);
}
