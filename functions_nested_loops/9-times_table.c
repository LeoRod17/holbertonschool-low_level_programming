#include "main.h"

/**
 *times_table - Prints the multiplication table
 *
 *Return: 0
 */

void print(int n)
{
if (n/10)
print(n/10);

putchar(n%10 + '0');
}

void times_table(void)
{
int a;
int x;
int res;
for (x = 0; x < 10; x++)
{
for (a = 0 ; a < 10; a++)
{
res = a * x;
print(res);
putchar(',');
putchar(' ');
putchar(' ');
}
putchar('\n');
}
}
