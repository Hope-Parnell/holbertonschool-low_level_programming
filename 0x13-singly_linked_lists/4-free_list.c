#include "lists.h"

/**
 * free_list - frees memory allocated for a singly linked list
 *
 * @head: pointer to the list to free
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	if (!head)
		return;
	free_list(head->next);
	free(ptr->str);
	free(ptr);
}
