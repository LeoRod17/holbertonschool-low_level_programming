#include "main.h"
/**
 *print_diagsums - a function that sums a cell of the array bidimentional
 *@a: - a pointer
 *@size: - the size of what to sum
 */

void print_diagsums(int *a, int size)
{
int i;
int s;
int j;
int p;
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
if (i == size && j == size)
{
s = a[i];
p = a[j];
printf("%d, ", s);
printf("%d", p);
}
}
}
}
