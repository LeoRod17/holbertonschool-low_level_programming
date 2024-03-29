#include "search_algos.h"

/**
 *linear_search - search a value in an array using the Linear search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size:  the number of elements in array
 *@value:  is the value to search for
 *Return: the index were the number was found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
	return (-1);
}

for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld]", i);
	printf(" = [%d]\n", array[i]);

	if (array[i] == value)
	{
		return (i);
	}

}

return (-1);
}
