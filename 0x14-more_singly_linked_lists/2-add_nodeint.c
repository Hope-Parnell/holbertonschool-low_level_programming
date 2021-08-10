#include "lists.h"

/**
 * add_nodeint - adds a node to beginning of linked list
 *
 * @head: pointer to current head of list
 * @n: integer to store in the new node
 * Return: pointer to new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	new->n = n;
	*head = new;

	return (*head);
}
