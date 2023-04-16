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

	if (ht == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
	while (ht->array[i]->value != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			value = ht->array[i]->value;
			return (value);
		}
		ht->array[i] = ht->array[i]->next;
	}
	}
	return (NULL);
}
