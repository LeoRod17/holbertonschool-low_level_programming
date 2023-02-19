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
char pri;
for (x = 0; x < 9; x++)
{
for (a = 0 ; a < 9; a++)
{
res = a * x;
pri = res + '0';
_putchar(pri);
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
