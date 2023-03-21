#include "function_pointers.h"
/**
 *array_iterator - a function to execute a function in every part of an array 
 *@array: - the array to work with
 *@size: - the size of the array
 *@action: - the pointer of the function to use
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i< size; i++)
{
action(array[i]);
}
}
}
