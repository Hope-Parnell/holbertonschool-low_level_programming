#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:
 * @key:
 *
 * Return: the value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *parser;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	for (parser = ht->array[i]; parser; parser = parser->next)
	{
		if (strcmp(key, parser->key) == 0)
		{
			return (parser->value);
		}
	}
	return (NULL);
}
