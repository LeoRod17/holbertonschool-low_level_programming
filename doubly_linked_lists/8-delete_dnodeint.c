#include "lists.h"

/**
 *delete_dnodeint_at_index - a function that deletes the node we want with index
 *@head: the doubly linked list
 *@index: where i am going to erase the node
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t  *res;

	if (head == NULL)
	{
		return (-1);
	}
	res = *head;
	while (i < index && res != NULL)
	{
		res = res->next;
		i++;
	}
	if (res == NULL)
	{
		return (-1);
	}
	if (*head == res)
	{
		*head = res->next;
	}

	if (res-> next != NULL)
	{
		res->next->prev = res->prev;
	}

	if (res->prev != NULL)
	{
		res->prev->next = res->next;
	}
	return (1);
}
