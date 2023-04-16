#include "hash_tables.h"

/**
 **hash_table_get - a function that retrieves a value of key
 *@ht: the hash table
 *@key: the key of what you are looking for
 *Return: the table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
		node = ht->array[i];
	while (node->value != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
			return (value);
		}
		node = node->next;
	}
	}
	return (NULL);
}
