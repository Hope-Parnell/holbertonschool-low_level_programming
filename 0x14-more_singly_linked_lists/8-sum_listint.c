#include "lists.h"

/**
 * sum_listint - adds the contents of a linked list of ints
 *
 * @head: A singly linked list of ints
 * Return: sum of contents of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
