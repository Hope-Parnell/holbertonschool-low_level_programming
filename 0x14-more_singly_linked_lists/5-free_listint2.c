#include "lists.h"

/**
 * free_listint2 - frees a linked list and resets it
 *
 * @head: pointer to linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *liberator;

	if (head)
	{
		while (*head)
		{
			liberator = *head;
			*head = (*head)->next;
			free(liberator);
		}
		*head = NULL;
	}
}
