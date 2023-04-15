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
	unsigned long int res, i, t;

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
	h->key = strcpy(h->key, key);
	h->value = strcpy(h->value, value);
	res = key_index((unsigned char *)key, ht->size);
	for (i = 0; i < ht->size; i++)
	{
		t = (i + res) % ht->size;
	if (ht->array[t] == NULL)
	{
	ht->array[t] = h;
		return (1);
	}
	}
	return (0);
}
