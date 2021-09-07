#include "lists.h"

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

	if (!*head)/*list is NULL*/
		return (-1);
	hide = get_node(*head, index);
	if (!hide) /*node does not exist at index*/
		return (-1);
	if (index == 0 && hide == *head)/*head was the actual head of the list*/
		*head = hide->next;
	if (hide->prev)
		hide->prev->next = hide->next;
	if (hide->next)
		hide->next->prev = hide->prev;
	free(hide);
	return (0);
}
/**
 * get_node - finds a node at a specific index
 * @head: pointer to list
 * @index: which node to return
 * Return: node at index, NULL if nonexistant
 */

dlistint_t *get_node(dlistint_t *head, unsigned int index)
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
