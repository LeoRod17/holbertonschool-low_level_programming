#include "variadic_functions.h"

/**
 *sum_them_all - a function that sums all their parameters
 *@n: - the number of parameters to sum
 *
 *Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int i;
int sum;
if (n == 0)
{
return (0);
}
else
{
va_start(l, n);
for (i = 0; i < n; i++)
{
sum += va_arg(l, int);
}
va_end(l);
return (sum);
}
}
