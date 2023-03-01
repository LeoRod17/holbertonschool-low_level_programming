#include "main.h"

/**
 *reverse_array - a function that reverses the orden of an array of integers
 *@a: - the string
 *@n: - the size of the string
 *
 */

void reverse_array(int *a, int n)
{
int s;
int b;
int i;
int array[31];
for (s = n -1; s >= 0; s--)
{
array[b] = a[s];
b++;
}
for (i = 0; i <= n; i++)
{
a[i] = array[i];
}
}
