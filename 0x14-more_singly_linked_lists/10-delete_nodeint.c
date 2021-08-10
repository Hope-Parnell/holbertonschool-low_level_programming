#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specific node in a singly linked list
 * @head: singly linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *delete, *prev = *head;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!prev)
			return (-1);
		prev = prev->next;
	}
	if (!prev)
		return (-1);
	delete = prev->next;
	if (!delete)
		return (-1);
	prev->next = delete->next;
	free(delete);

	return (1);
}
