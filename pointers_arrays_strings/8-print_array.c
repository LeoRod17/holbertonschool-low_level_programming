#include "main.h"
#include <string.h>

/**
 *print_array
 *@n: - the value of integer where i start
 *@a: the pointer to the array
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
if(i != n)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
_putchar('\n');
}
