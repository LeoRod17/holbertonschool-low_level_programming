#include "hash_tables.h"

/**
 *hash_table_set - a function to add an element to a hash table
 *@ht: the hash table
 *@key: the key of the new node
 *@value: the value of the new node
 *Return: a hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h;
	unsigned long int res, j;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (value == NULL)
		value = "";
	h = malloc(sizeof(hash_node_t) * ht->size);
	if (h == NULL)
	{
		free(h);
		return (0);
	}
	h->key = strdup(key);
	h->value = strdup(value);
	res = key_index((unsigned char *)key, ht->size);
	h->next = ht->array[res];
	for (j = res; ht->array[j] != NULL; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = h->value;
			return (1);
		}
	}
	ht->array[res] = h;
	return (1);
}
