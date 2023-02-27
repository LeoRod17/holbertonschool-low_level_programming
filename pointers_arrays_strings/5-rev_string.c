#include "main.h"
#include <string.h>
/**
 *rev_string - a string that prints reverse
 *@s: - the string to receive
 *
 */

void rev_string(char *s)
{
int a;
int b;
a = strlen(s);
for(b = 0;b < a; a--)
{
_putchar(a);
}
}
