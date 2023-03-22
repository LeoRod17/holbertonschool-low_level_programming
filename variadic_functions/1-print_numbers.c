#include "variadic_functions.h"

/**
 *print_numbers - a function that prints the char and the numbers
 *@separator: - the chars that we pass with the function
 *@n: - the number of numbers
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int res;
va_list l;

va_start(l, n);
res = 0;
for (i = 0; i < n; i++)
{
res = va_arg(l, int);
printf("%d", res);
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(l);
printf("\n");
}
