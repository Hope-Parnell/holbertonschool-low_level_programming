#include "lists.h"

/**
 * insert_dnodeint_at_index - insterts a node at the specified index
 * @h: pointer to the list
 * @idx: where to insert the node
 * @n: value to store in the node
 * Return: pointer to the new node, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *seek, *new;

	if (!*h && idx != 0)
		return (NULL);
	seek = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		seek = get_dnodeint_at_index(*h, idx - 1);/*find prev node*/
		if (!seek)/*idx goes more than 1 beyond tail*/
			return (NULL);
		if (!seek->next)/*adding node after tail*/
		{
			new = add_dnodeint_end(h, n);
		}
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->prev = seek;
			new->next = seek->next;
			seek->next = new;
			new->next->prev = new;
		}
	}
	return (new);
}

/**
 * get_dnodeint_at_index - finds a node at a specific index
 * @head: pointer to list
 * @index: which node to return
 * Return: node at index, NULL if nonexistant
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *trueHead, *seek;

	if (!head)
		return (NULL);
	trueHead = head;
	while (trueHead->prev)/*find the head*/
		trueHead = trueHead->prev;
	seek = trueHead;
	for (i = 0; i < index; i++)
	{
		if (!seek)/*check for node existance*/
			return (NULL);
		seek = seek->next;
	}
	if (!seek)
		return (NULL);
	return (seek);
}

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
