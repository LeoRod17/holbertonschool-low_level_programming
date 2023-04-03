#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 **add_node_end - a function that adds a node at the end
 *@head: the list of what I want to print
 *@str: the string i want to add to the list
 *Return: a pointer to a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nlist, *res;

	nlist = malloc(sizeof(list_t));
	if (nlist == NULL)
	{
		return (0);
	}
	res = *head;
	nlist->str = strdup(str);
	nlist->len = strlen(str);
	if (res != NULL)
	{
		while (res->next != NULL)
		{
			res = res->next;
		}
		res->next = nlist;
	}
	else
		*head = nlist;
	return (*head);
}
