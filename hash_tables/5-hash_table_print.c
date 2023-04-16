#include "hash_tables.h"

/**
 *hash_table_print - a function that prints a hash table
 *@ht: the hash table
 *Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;

if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
	printf(" '%s': ", ht->array[i]->key);
	printf("'%s', ", ht->array[i]->value);
}
}
}
