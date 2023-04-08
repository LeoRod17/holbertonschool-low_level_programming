#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}
	for (i = 0; i != index; i++)
	{
		if (i == index)
		{
			head = list;
		}
		else
		{
			head = head->next;
		}
	}
	return (head);
}
