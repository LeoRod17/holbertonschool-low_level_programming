#include "lists.h"

/**
 *list_len
 *@h: the list of elements
 *Return: the lenght of elements
 */
size_t list_len(const list_t *h)
{
size_t ele = 0;

while (h != NULL)
{
ele++;
h = h->next;
}
return (ele);
}
