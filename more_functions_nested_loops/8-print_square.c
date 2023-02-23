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
for (b = 0; b < size; b++)
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}

