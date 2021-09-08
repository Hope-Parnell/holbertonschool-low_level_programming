#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a specific index
 * @head: pointer to list
 * @index: which node to return
 * Return: node at index, NULL if nonexistant
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *trueHead, *seek;

	if (!head)/*list is empty*/
		return (NULL);
	trueHead = head;
	while (trueHead->prev)/*find the real head*/
		trueHead = trueHead->prev;
	seek = trueHead;
	for (i = 0; i < index; i++)/*loop to index*/
	{
		if (!seek)/*check for node existance*/
			return (NULL);
		seek = seek->next;
	}
	if (!seek)/*node does not exist at index*/
		return (NULL);
	return (seek);
}
