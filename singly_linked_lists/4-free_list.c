#include "lists.h"

/**
 *free_list - a function to free the memory of a list
 *@head: the list to free
 *
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
	free(head->str);
	free(head);
	}
}
