#include "lists.h"

/**
 * print_listint - prints a singly linked list of ints
 *
 * @h: pointer to head of list
 * Return: number of nodes in given list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;
	listint_t *ptr = (listint_t *)h;

	if (!ptr)
		return (0);
	for (nodes = 0; ptr != NULL; nodes++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (nodes);
}
