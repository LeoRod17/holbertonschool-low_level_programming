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
int n = a  / 2;
if (n % 2 == 0)
{
n++;
}
for (i = n; i < a - 1; i++)
{
_putchar(str[i]);  
}
_putchar('\n');
}
