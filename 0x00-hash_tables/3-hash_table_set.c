#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key for the element
 * @value: value to store
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *insert;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (insert = ht->array[i]; insert; insert = insert->next)
	{
		if (strcmp(key, insert->key) == 0)
		{
			free(insert->value);
			insert->value = strdup(value);
			if (!insert->value)
				return (0);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	if (!ht->array[i])
		new->next = NULL;
	else
		new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
