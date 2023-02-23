#include "main.h"
/**
 *print_square - print the symbol # in a square form
 *@size: - the value of how much # will print
 *Return: 0
 */

void print_square(int size)
{
int a;
int b;
for (b = 1; b < size; b++)
{
_putchar('\n');
_putchar(35);
for (a = 1; a < size; a++)
{
_putchar(35);
if (size <= 0)
{
_putchar('\n');
}
}
}
}

