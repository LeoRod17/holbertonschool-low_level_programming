#include "main.h"
/**
 *print_to_98 - a function that prints all number from the value given to 98
 *
 *
 */

void print_to_98(int n)
{
if(n < 98)
{
for (n;n < 98; n++)
{
putchar(n);
putchar(" ,");
}
}
if(n > 98)
{
for (n;n >98; n--)
{
putchar(n);
putchar(" ,");
}
}
}
