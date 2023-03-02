#include "main.h"
#include <string.h>

/**
 **leet - a function that encodes a string into 1337
 *@s: - the pointer to the array
 *Return: a char
 */
char *leet(char *s)
{
int i;
int a;
int b;
char r[] = {'o','l', 'e', 'a', 't'};
char n[] = {'0', '1', '3', '4', '7'};
a = strlen(s);
for (i = 0; i < a; i++)
{
for (b = 0; b < 8; b++)
{
if (s[i] == r[b])
{
s[i] = n[b];
}
}
}
return (s);
}
