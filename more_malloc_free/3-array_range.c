#include "main.h"

/**
 **array_range - a function to do an array
 *@min: -  the value with the array will start
 *@max: - the value of te max of the array
 *Return: array
 */
int *array_range(int min, int max)
{
int i;
int *a;
int c;
if (min > max)
{
return (NULL);
}
c = max - min;
 a = malloc(sizeof(int) * (c + 4));
if (a == NULL)
{
exit(1);
}
for (i = 0; min < max; i++)
{
a[i] = min;
min++;
}
return (a);
}
