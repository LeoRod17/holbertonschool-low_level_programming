#include "main.h"
/**
 *print - a function that I use to print the proyect
 *
 *@p: - te value to print
 *
 *print_to_98 - a function that prints all number from the value given to 98
 *@n: the value of what I recieve
 *Return: 0
 */

void print(int p)
{
if (p / 10)
print(p / 10);

putchar(p % 10 + '0');
}

void print_to_98(int n)
{
if(n < 98)
{
while(n < 98)
{
print(n);
putchar(',');
putchar(' ');
n++;
}
}
if(n > 98)
{
for (;n >98; n--)
{
print(n);
putchar(',');
putchar(' ');
}
}
}
