#include "lists.h"

/**
 * free_listint - frees a singly linked list
 *
 * @head: pointer to linked list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (!ptr)
		return;
	free_listint(ptr->next);
	free(ptr);
}
