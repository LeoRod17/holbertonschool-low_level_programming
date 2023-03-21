
#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer
 *@array: - the array to look for
 *@size: -the size of the array
 *@cmp: - a pointer to the function to compare ints
 *Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int r;
if (array != NULL && size > 0 && cmp != NULL)
{
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r != 0)
{
return (i);
}
}
return (-1);
}
else
{
return (-1);
}
}
