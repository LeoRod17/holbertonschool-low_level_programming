#include "main.h"

/**
 *print_triangle - it prints a triangle with the # simbol
 *@size: - the size of the variable
 *Return: 0
 */

void print_triangle(int size)
{
int a;
int b;
int s = size;
for(a = 1; a <= size; a++)
{
for (b = 1; b < a; b++)
{
if(b >= s -1)
{
_putchar(35);
}
else
{
putchar(' ');
}
s--;
_putchar('\n');
}
}
if(size <= 0)
{
_putchar('\n');
}
}
