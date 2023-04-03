#include "lists.h"

/**
 *print_list - a function that prints a singel lined lists
 *@h: the list to print
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		p++;
		h = h->next;
	}
	return (p);
}
