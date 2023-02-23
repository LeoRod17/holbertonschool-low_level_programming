#include "main.h"
/**
 *print_diagonal - a function that prints on diagonal
 *@n: - the number we get from the main
 *Return: 0
 */

void print_diagonal(int n)
{
int a;
int b;
for(b = 0; b < a; b++)
{
_putchar(' ');
}
for (a = 1; a <= n; a++)
{
_putchar(92);
if (n != a)
{
_putchar('\n');
}
}
if (n <= 0)
{
_putchar('\n');
}
}
