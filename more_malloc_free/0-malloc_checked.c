#include "main.h"

/**
 **malloc_checked: - a function to do malloc without malloc 
 *@b: - the size of the variable
 *
 *Return: 0
 */

void *malloc_checked(unsigned int b)
{
char *a;
a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
