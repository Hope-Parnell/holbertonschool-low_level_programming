#include "lists.h"

/**
 * sum_dlistint - adds the values stored in all nodes of a doubly linked list
 * @head: pointer to list
 *
 * Return: sum of all values
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *seek;
	int sum = 0;

	if (!head)/*check if list exists*/
		return (0);
	seek = head;
	while (seek->prev)/*make sure starting at head*/
		seek = seek->prev;
	while (seek)
	{
		sum += seek->n;
		seek = seek->next;
	}
	return (sum);
}
