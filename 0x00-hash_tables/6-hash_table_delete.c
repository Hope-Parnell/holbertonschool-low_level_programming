#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hide;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hide = ht->array[i];
		while (hide)
		{
			ht->array[i] = hide->next;
			free(hide->key);
			free(hide->value);
			free(hide);
			hide = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
