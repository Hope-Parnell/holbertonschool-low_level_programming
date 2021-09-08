#include "lists.h"
dlistint_t *getNode(dlistint_t *head, unsigned int index);

/**
 * delete_dnodeint_at_index - deletes a node from a linked list
 * @head: pointer to list
 * @index: which node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hide;

	if (!*head || !head)/*list is NULL*/
		return (-1);
	hide = getNode(*head, index);
	if (!hide) /*node does not exist at index*/
		return (-1);
	if (index == 0)/*removing the head of the list*/
	{
		if (!(*head)->prev)/*head is the actual head*/
		{
			if (hide->next)
				*head = (*head)->next;
			else /*there is only 1 node*/
				*head = NULL;
		}
		else /*set the new head but don't move the pointer*/
		{
			if (hide->next)
				hide->next->prev = NULL;
		}
	}
	if (hide->prev)
	{
		if (hide->next)
			hide->prev->next = hide->next;
		else
			hide->prev->next = NULL;
	}
	if (hide->next)
	{
		if (hide->prev)
			hide->next->prev = hide->prev;
		else
			hide->next->prev = NULL;
	}
	free(hide);
	return (0);
}
/**
 * getNode - finds a node at a specific index
 * @head: pointer to list
 * @index: which node to return
 * Return: node at index, NULL if nonexistant
 */

dlistint_t *getNode(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *trueHead, *seek;

	if (!head)
		return (NULL);
	trueHead = head;
	while (trueHead->prev)/*find the head*/
		trueHead = trueHead->prev;
	seek = trueHead;
	for (i = 0; i < index; i++)
	{
		if (!seek)/*check for node existance*/
			return (NULL);
		seek = seek->next;
	}
	if (!seek)
		return (NULL);
	return (seek);
}
