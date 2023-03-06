#include "main.h"
#include <string.h>
/**
 *_puts_recursion - a function that prints with recursion
 *@s: - the char with what to print
 *
 */
void _puts_recursion(char *s)
{
int a;
a = strlen(s);
if (*s == '\0')
{
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
