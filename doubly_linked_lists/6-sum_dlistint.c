#include "lists.h"

/**
 *sum_dlistint - a function that returns the sum of the n value of all the list
 *@head: the list
 *Return: the sum of all the n
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
