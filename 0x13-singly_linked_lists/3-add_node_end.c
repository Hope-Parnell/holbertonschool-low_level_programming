#include "lists.h"

/**
 * add_node_end - adds a node to the end of a singly linked list
 * @head: pointer to the list
 * @str: string to store in the new node
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; new->str[i] != '\0'; i++)
		{}
		new->len = i;
	}
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = (list_t *)*head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (new);
}
