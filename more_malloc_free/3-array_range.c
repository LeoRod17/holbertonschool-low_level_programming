#include "main.h"

/**
 **array_range - a function to do an array
 *@min: -  the value with the array will start
 *@max: - the value of te max of the array
 *Return: array
 */
int *array_range(int min, int max)
{
int *a;
if (min > max)
{
return (NULL);
}
a = malloc(sizeof(int) * (max - min));
if (a == NULL)
{
exit(1);
}
for (; min <= max; min++)
{
a[min] = min;
}
return (a);
}
