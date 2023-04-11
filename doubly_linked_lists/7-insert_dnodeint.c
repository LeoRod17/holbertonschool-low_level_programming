#include "lists.h"

/**
 **insert_dnodeint_at_index - at function that insert data in a particular node
 *@h: the list
 *@idx: the index of the list where the new node will be
 *@n: the new value of the list
 *Return: the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *list, *res;

	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}
	res = *h;
	while (i != idx - 1 && res->next != NULL)
	{
		res = res->next;
		i++;
	}
	list->n = n;
	list->prev = res;
	list->next = res->next;
	*h = list;
	return (*h);
}
