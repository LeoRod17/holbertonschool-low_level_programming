#include "main.h"
/**
 *more_numbers - this print from 0-14 ten times
 *
 *Return: 0
 */

void more_numbers(void)
{
int i;
int a;
int x = 0;
while (x<9)
{
for (a = 48; a < 50; a++)
{
for (i = 48; i < 58; i++)
{
if (a== 49)
{
_putchar(a);
}
_putchar(i);
if (a == 49 && i == 52)
{
a=50;
i=60;
}
}
_putchar('\n');
}
x++;
}
}
