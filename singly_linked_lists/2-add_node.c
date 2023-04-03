#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 **add_node - a function that adds a new node to a singly linked list
 *@head: where the node will be saved
 *@str: the content of the node
 *Return: the adress of the new elements
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
