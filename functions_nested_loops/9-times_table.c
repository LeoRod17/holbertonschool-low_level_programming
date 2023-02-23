#include "main.h"

/**
 *times_table - Prints the multiplication table
 *
 *print - a function to help me print the value of res
 *
 *@n: - value of were i am in the table to help me print
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
for (a = 0 ; a < 10; a++)
{
  res = a * x;
  if( res <= 9)
    {
      _putchar(' ');
    }
  else
    {
      _putchar((res / 10) + 48);
    }
res = a * x;
_putchar(res % 10 + 48);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
