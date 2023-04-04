#include "lists.h"

/**
 *print_dlistint - a function to print a doubly linked list
 *@h: the list to print
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node = 0;

if (h == 0)
{
return (0);
}
while (h != NULL)
{
printf("%d\n", h->n);
node++;
h = h->next;
}
return (node);
}
