#include "lists.h"
/**
 * list_len - finds the length of singly linked lists
 * @h: pointer to a singly linked list
 *
 * Return: Number of nodes in h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	list_t *ptr = (list_t *)h;

	if (!h)
		return (0);
	while (ptr)
	{
		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
