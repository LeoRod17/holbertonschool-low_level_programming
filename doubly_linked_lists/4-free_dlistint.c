#include "lists.h"

/**
 * free_dlistint - a function that frees the memory
 *@head: - the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	if (head != NULL)
	{
		while (head != NULL)
		{
			list = head;
			head = head-next;
			free(list->n);
			free(list);
		}
	}
}
