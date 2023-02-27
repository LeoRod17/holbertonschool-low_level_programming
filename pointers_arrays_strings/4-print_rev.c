#include "main.h"
#include <string.h>
/**
 *print_rev - a string that prints reverse
 *@s: - the string to receive
 *
 */

void print_rev(char *s)
{
int a;
int b;
a = strlen(s);
for(b = -1; b < a; a--)
{
_putchar(s[a]);
}
}
