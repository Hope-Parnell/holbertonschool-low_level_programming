#include "lists.h"

/**
 * print_list - prints all elements of a singly linked list
 * @h: pointer to start of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	list_t *ptr = (list_t *)h;

	if (!h)
		return (0);

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
