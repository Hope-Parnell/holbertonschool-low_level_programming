#include "lists.h"

/**
 * new_head - adds a node to the beginning of doubly linked list
 *
 * @head: pointer to the list
 * @n: integer value to store in the node
 * Return: pointer to the new node;
 */

dlistint_t *new_head(dlistint_t **head, const int n)
{
	dlistint_t *new, *trueHead;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (!*head)/*check if list is empty*/
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		trueHead = *head;
		while (trueHead->prev)/*make sure at actual head*/
			trueHead = trueHead->prev;
		new->next = trueHead;
		trueHead->prev = new;
	}
	return (new);
}

/**
 * new_tail - adds a node to the end of a doubly linked list
 * @head: pointer to the list
 * @n: integer value to store in the node
 *
 * Return: pointer to new node, NULL on failure
 */

dlistint_t *new_tail(dlistint_t **head, const int n)
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
		new = new_head(h, n);
	}
	else
	{
		seek = get_node(*h, idx - 1);/*find prev node*/
		if (!seek)/*idx goes more than 1 beyond tail*/
			return (NULL);
		if (!seek->next)/*adding node after tail*/
		{
			new = new_tail(h, n);
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
 * get_node - finds a node at a specific index
 * @head: pointer to list
 * @index: which node to return
 * Return: node at index, NULL if nonexistant
 */

dlistint_t *get_node(dlistint_t *head, unsigned int index)
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
