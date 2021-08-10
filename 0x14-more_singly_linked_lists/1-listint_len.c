#include "lists.h"

/**
 * listint_len - finds the length of a linked list
 *
 * @h: pointer to head of list
 * Return: number of nodes inlist
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;
	listint_t *ptr = (listint_t *)h;

	if (!ptr)
		return (0);
	for (nodes = 0; ptr != NULL; nodes++)
	{
		ptr = ptr->next;
	}

	return (nodes);
}
