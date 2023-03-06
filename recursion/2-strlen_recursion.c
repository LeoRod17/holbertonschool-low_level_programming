#include "main.h"

/**
 *_strlen_recursion - a function that returns the size of a string
 *@s: - the pointer to the string
 *
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
int r;
r = s;
return (r);
}
else
{
_strlen_recursion(s + 1);
}
}
