#include "main.h"

/**
 *reverse_array - a function that reverses the orden of an array of integers
 *@a: - the string 
 *@n: - the size of the string
 *
 */

void reverse_array(int *a, int n)
{
int i;
int s;

for (i = 0; i <= n; i++)
{
printf("%d", a[i]);
}
for (s = n - 1; s >= 0; s--)
{
printf("%d", a[i]);
}
}
