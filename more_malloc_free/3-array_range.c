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
int i;
if (min > max)
{
return (NULL);
}
a = malloc(sizeof(int) * (max + 1));
if (a == NULL)
{
exit(1);
}
i = min;
for (; i < max; i++)
{
a[i] = i;
}
return (a);
}
