#include "hash_tables.h"

/**
 *hash_table_delete - a function that deletes a hash table
 *@ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *table;
unsigned long int i;

table = hash_table_create(ht->size);
if (ht != NULL)
{
for (i = 0;ht->array[i] != NULL; i++)
{
table->array[i] = ht->array[i];
free(table);
}
}
}
