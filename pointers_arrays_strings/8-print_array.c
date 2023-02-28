#include "main.h"
#include <string.h>

/**
 *print_array
 *@n: - the value of integer where i start
 *@a: the pointer to the array
 */

void print_array(int *a, int n)
{
int s = sizeof(a);
for (; n < s; n++)
{
printf("%d, ", a[n]);
}
}
