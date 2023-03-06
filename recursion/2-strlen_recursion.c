#include "main.h"

/**
 *_strlen_recursion - a function that returns the size of a string
 *@s: - the pointer to the string
 *
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_strlen_recursion(s + 1);
}
else
{
int r = *s;
return (r);
}
}
