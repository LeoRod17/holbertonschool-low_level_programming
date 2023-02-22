#include "main.h"
/**
 *print_line - a function that prints a line as long as the variable
 *@n: -  the times the line will be printed
 *
 *Return: 0
 */

void print_line(int n)
{
int a;
for (a = 1; a <= n; a++)
{
_putchar(95);
}
_putchar('\n');
if (n <= 0)
{
_putchar('\n');
}
}
