#include "lists.h"

/**
 * add_nodeint_end - adds a node to end of singly linked list
 *
 * @head: pointer to head of list
 * @n: number to store in new node
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
	}
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	new->n = n;
	new->next = NULL;

	return (new);
}
