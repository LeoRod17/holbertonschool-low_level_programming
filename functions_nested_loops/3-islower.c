#include "main.h"
#include <ctype.h>

/**
 *_islower - A function to see if a char is lower case
 *_putchar - write the character c to stdout
 *@c: - the character to print
 *Return: 0
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
