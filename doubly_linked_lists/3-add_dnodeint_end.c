#include "lists.h"

/**
 *add_dnodeint_end - a function that adds a node at the end of the list
 *@head: a pointer of the list
 *@n: the number to add as a node
 *Return: a pointer of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list, *res;

	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}
	res = *head;
	list->n = n;
	list->prev = NULL;
	if (*head == NULL)
	{
		*head = list;
		list->prev = NULL;
		return(*head);
	}
	while (res->next != NULL)
	{
		res = res->next;
		res->next = list;
		list->prev = res;
	}
	*head = list;
	return(*head);
}
