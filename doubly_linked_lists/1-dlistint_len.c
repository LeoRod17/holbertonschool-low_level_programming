#include "lists.h"
/**
 *dlistint_len - a function that returns the number of nodes of a lists
 *@h: the list
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
