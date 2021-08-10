#include "lists.h"

/**
 * pop_listint -  deletes head node and returns its data;
 *
 * @head: pointer to linked list
 * Return: data stored in popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *pop = (listint_t *)*head;
	int n;

	if (!head || !*head)
		return (0);
	*head = (*head)->next;
	n = pop->n;
	free(pop);

	return (n);
}
