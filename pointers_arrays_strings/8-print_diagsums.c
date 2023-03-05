#include "main.h"
/**
 *print_diagsums - a function that sums a cell of the array bidimentional
 *@a: - a pointer
 *@size: - the size of what to sum
 */

void print_diagsums(int *a, int size)
{
int i;
int s = 0;
int p = 0;
for (i = 0; i <= size; i++)
{
s = s + a[i];
p = p + a[size -i -1];
printf("%d, ", s);
printf("%d", p);
}
}
