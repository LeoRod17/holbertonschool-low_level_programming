#include "lists.h"

/**
 * add_dnodeint - 'a function that adds a node to the list.'
 * @head: the list which I am going to add the node
 * @n: what i am going to add in the node
 * Return: a pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	list->next = NULL;
	list->prev = NULL;
	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		res->prev = list;
		list->next = res;

		*head = list;
	}
	return (*head);
}
