#include "main.h"
#include <string.h>

/**
 *print_array - a function that prints an array untill the n position
 *@n: - the value of integer where i start
 *@a: the pointer to the array
 */

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d\n", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
}
else
{
printf("\n");
}
}
