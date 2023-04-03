#include "lists.h"

/**
 *free_list - a function to free the memory of a list
 *@head: the list to free
 *
 */
void free_list(list_t *head)
{
	list_t *list;
	if (head != NULL)
	{
		while (head != NULL)
		{
			list = head;
			head = head->next;
			free(list);
		}
	}
}
