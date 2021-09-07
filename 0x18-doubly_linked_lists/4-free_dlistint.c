#include "lists.h"

/**
 * free_dlistint - frees all nodes in a doubly linked list
 *
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hide, *seek;

	if (!head)
		return;
	seek = head;
	while (seek->prev)/*find true head*/
		seek = seek->prev;
	while (seek)
	{
		hide = seek;
		seek = seek->next;
		free(hide);
	}
}
