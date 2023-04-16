#include "hash_tables.h"

/**
 *hash_table_delete - a function that deletes a hash table
 *@ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *n;
unsigned long int i;

if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
	while (ht->array[i] != NULL)
	{
		node = ht->array[i];
		n = node->next;
		free(node->key);
		free(node->value);
		free(node);
		ht->array[i] = n;
	}
}
free(ht->array);
free(ht);
}
}
