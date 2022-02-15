#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (current = ht->array[i]; current; current = current->next)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma = 1;
		}
	}
	printf("}\n");
}
