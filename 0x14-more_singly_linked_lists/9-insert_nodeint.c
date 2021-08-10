#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specific index
 * @head: a singly linked list
 * @idx: index at which to add the new node
 * @n: data for the new node
 * Return: pointer to new node, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *seek = *head;
	unsigned int i;

	if (!*head && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!seek)
			{
				free(new);
				return (NULL);
			}
			seek = seek->next;
		}
		if (!seek)
		{
			free(new);
			return (NULL);
		}
		new->next = seek->next;
		seek->next = new;
	}
	new->n = n;

	return (new);
}
