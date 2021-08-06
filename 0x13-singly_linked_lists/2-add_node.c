#include "lists.h"
/**
 * add_node - adds a node to a singly linked list
 * @head: pointer to the list
 * @str: string to store in the new node
 *
 * Return: address of new node, NULL upon failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!*head)
		new->next = NULL;
	else
		new->next = *head;
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
	*head = new;
	return (*head);
}
