#include "lists.h"

/**
 * dlistint_len - counts the nodes in a doubly linked list
 * @h: pointer to a node in the list
 *
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *seek, *head;
	size_t nodes;

	if (!h)/*check if list is NULL*/
		return (0);
	head = (dlistint_t *)h;
	while (head->prev) /*find the head*/
		head = head->prev;
	seek = head;
	for (nodes = 0; seek != NULL; nodes++)/*count nodes until NULL*/
	{
		seek = seek->next;
	}
	return (nodes);
}
