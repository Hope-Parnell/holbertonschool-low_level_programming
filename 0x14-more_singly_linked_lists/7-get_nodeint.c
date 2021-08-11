#include "lists.h"

/**
 * get_nodeint_at_index - finds a node in a singly linked list
 *
 * @head: singly linked list
 * @index: index of the node to find
 * Return: pointer to node, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *seek = head;
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!seek)
			return (NULL);
		seek = seek->next;
	}

	return (seek);
}
