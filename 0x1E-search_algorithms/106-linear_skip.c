#include "search_algos.h"

/**
 * linear_skip - linear search with a skip list
 * @list: pointer to head of skip list
 * @value: value to search for
 *
 * Return: node where value was found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *l, *r, *p;

	for (l = list, r = l->express; r; l = l->express, r = r->express)
	{
		printf("Value checked at index [%lu] = [%i]\n", r->index, r->n);
		if (r->n == value)
			return (r);
		if (r->n > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l->index, r->index);
			for (p = l; p != r; p = p->next)
			{
				printf("Value checked at index [%lu] = [%i]\n", p->index, p->n);
				if (p->n == value)
					return (p);
			}
			return (NULL);
		}
	}
	for (r = l; r->next; r = r->next)
	;
	printf("Value found between indexes [%lu] and [%lu]\n", l->index, r->index);
	for (p = l; p; p = p->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", p->index, p->n);
		if (p->n == value)
			return (p);
	}
	return (NULL);
}
