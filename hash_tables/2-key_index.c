#include "hash_tables.h"

/**
 *key_index - a function to get the index of a key
 *@key: the key to get the function
 *@size: the size of the array
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int res;

res = hash_djb2(key) % size;
return (res);
}
