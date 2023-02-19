#include "main.h"

/**
 *times_table - Prints the multiplication table
 *
 *Return: 0
 */

void times_table(void)
{
int a = 0;
int x = 0;
int res;
for (; x < 9; x++)
{
for (; a < 9; a++)
{
res = a * x;
putchar(res);
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
