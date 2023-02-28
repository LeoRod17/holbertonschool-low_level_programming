#include "main.h"
#include <string.h>

/**
 *puts_half - a function that prints half of a string
 *@str: - a pointer to the string
 *
 */

void puts_half(char *str)
{
int i;
int a = strlen(str);
int n = (a - 1) / 2;
for (i = a / 2; i < a; i++)
{
if (i % 2 = 0)
{
_putchar(str[a]);
}
else
{
_putchar(str[n]);
}
}
}
