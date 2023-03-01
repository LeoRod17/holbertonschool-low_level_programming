#include "main.h"
#include <string.h>

/**
 **string_toupper - a function that changed the lower cas to uppercase
 *@s: - the pointer to the string
 *Return: a char
 */

char *string_toupper(char *s)
{
int i;
int a;
int b;
int r;
r = 32;
a = strlen(s);
for (i = 0; i < a; i++)
{
if (s[i] > 96 && s[i] < 123)
{
b = s[i];
b = b - r;
s[i] = b;
}
}
return (s);
}
