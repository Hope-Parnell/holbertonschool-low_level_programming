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
	listint_t *hide, *seek = *head;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		hide = *head;
		*head = (*head)->next;
		free(hide);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!seek)
			return (-1);
		seek = seek->next;
	}
	if (!seek)
		return (-1);
	hide = seek->next;
	if (!hide)
		return (-1);
	seek->next = hide->next;
	free(hide);

	return (1);
}
