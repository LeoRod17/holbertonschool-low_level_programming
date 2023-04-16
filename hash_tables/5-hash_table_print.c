#include "hash_tables.h"

/**
 *hash_table_print - a function that prints a hash table
 *@ht: the hash table
 *Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i,j = 0;
hash_node_t *node;
if (ht != NULL)
{
	printf("{");
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while(node != NULL)
	{
		if(j == 1)
		{
			printf(", ");
		}
	printf("'%s': ", node->key);
	printf("'%s'", node->value);
	node = node->next;
	j = 1;
	}
}
printf("}\n");
}
}
