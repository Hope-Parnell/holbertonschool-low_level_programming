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

	new = malloc(sizeof(dlistint_t));/*allocate space for node*/
	if (!new)/*malloc failed*/
		return (NULL);
	new->n = n;
	new->next = NULL;/*makes new the tail*/
	if (!*head)/*no current nodes*/
	{
		new->prev = NULL;/*makes new the head*/
		*head = new;/*set the list to point to new node*/
	}
	else /*connect new to end of list*/
	{
		tail = *head;
		while (tail->next)/*find the tail*/
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
	}
	return (new);/*successfully added node*/
}
