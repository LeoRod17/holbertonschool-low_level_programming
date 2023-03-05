#include "main.h"
/**
 *print_diagsums - a function that sums a cell of the array bidimentional
 *@a: - a pointer
 *@size: - the size of what to sum
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int s = 0;
int p = 0;
int b = size;
for (i = 0; i < size; i++)
{
for (j = 0; j < b; j++)
{
if(i == j)
{
s = s + a[b];
}
}
}
for (i = 0; i < size; i++)
{
for (j = 0; b < j; b++)
{
if (i == j)
{
p = p + a[b];
}
}
}
printf("%d, ", p);
printf("%d", s);
}
