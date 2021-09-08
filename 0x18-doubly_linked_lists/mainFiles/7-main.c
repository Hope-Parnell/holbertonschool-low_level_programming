#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
	unsigned int index = 10;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    if (insert_dnodeint_at_index(&head, index, 4096) == NULL)
		printf("node could not be added index %u\n", index);
    print_dlistint(head);
	printf("-----------------\n");
	index = 0;
    if (insert_dnodeint_at_index(&head, index, 4096) == NULL)
		printf("node could not be added index %u\n", index);
    print_dlistint(head);
	printf("-----------------\n");
	index = 5;
    if (insert_dnodeint_at_index(&head, index, 4096) == NULL)
		printf("node could not be added index %u\n", index);
    print_dlistint(head);
	printf("-----------------\n");
	index = 10;
    if (insert_dnodeint_at_index(&head, index, 12) == NULL)
		printf("node could not be added index %u\n", index);
    print_dlistint(head);
	printf("-----------------\n");
    if (insert_dnodeint_at_index(&head, index, 123) == NULL)
		printf("node could not be added index %u\n", index);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
