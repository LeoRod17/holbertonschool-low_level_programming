#include "main.h"

/**
 *times_table - Prints the multiplication table
 *
 *Return: 0
 */

void times_table(void)
{
int a;
int x;
int res;
for (x = 0; x < 10; x++)
{
_putchar('0');
for (a = 1 ; a < 10; a++)
{
if (a != 10)
{
res = a * x;
_putchar(',');
_putchar(' ');
}
else
{
res = a * x;
_putchar(' ');
}
if (res <= 9)
{
_putchar(' ');
}
else
{
_putchar((res / 10) + 48);
}
_putchar(res % 10 + 48);
}
_putchar('\n');
}
}
