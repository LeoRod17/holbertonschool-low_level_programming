#include "main.h"
/**
 *print_to_98 - a function that prints all number from the value given to 98
 *@n: the value of what I recieve
 *Return: 0
 */

void print_to_98(int n)
{
if(n < 98)
{
while(n < 98)
{
putchar(n);
putchar(',');
putchar(' ');
}
}
if(n > 98)
{
for (;n >98; n--)
{
putchar(n);
putchar(',');
 putchar(' ');
}
}
}
