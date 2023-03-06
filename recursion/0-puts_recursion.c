#include "main.h"
#include <string.h>
/**
 *_puts_recursion - a function that prints with recursion
 *@s: - the char with what to print
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
