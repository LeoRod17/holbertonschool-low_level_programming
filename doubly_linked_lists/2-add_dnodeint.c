#include "lists.h"

/**
 * add_dnodeint - 'a function that adds a node to the list.'
 * @head: the list which I am going to add the node
 * @n: what i am going to add in the node
 * Return: a pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		free(list);
		return (*head);
	}
		list->n = n;
		list->next = *head;
		*head = list;
		free(list);
	return (*head);
}
