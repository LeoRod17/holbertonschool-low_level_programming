#include "lists.h"

/**
 *get_dnodeint_at_index - a function to return the especific node
 *@head: the list
 *@index: what node in the list i want
 *Return: the node i was looking for
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
