#include "main.h"
/**
 *print_to_98 - a function that prints all number from the value given to 98
 *
 *@n: the value of what I recieve
 *Return: 0
 */

void print_to_98(int n)
{
if(n < 98)
{
while(n < 99)
{
if(n <= 9)
{
_putchar(' ');
}
else
{
_putchar((n / 10) + 48);
}
_putchar(n % 10 + 48);
putchar(',');
putchar(' ');
n++;
}
}
if(n > 98)
{
for (;n > 97; n--)
{
if(n <= 9)
{
_putchar(' ');
}
else
{
_putchar((n / 10) + 48)
}
_putchar(res % 10 + 48);
}
if(n == 98)
_putchar((n / 10 ) + 48);
_putchar(n % 10);
putchar(' ');
}
