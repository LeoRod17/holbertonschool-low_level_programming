#include "main.h"
#include <string.h>
/**
 **_strchr - a function that looks for a character on a string
 *@s: - the pointer to an array
 *@c: - the character to look
 *Return: s
 */
char *_strchr(char *s, char c)
{
int i;
int a;
int b = 0;
a = strlen(s);
for (i = 0; i < a; i++)
{
if (s[i] == c)
{
for (; i < a; i++)
{
s[i] = s[b];
b++;
}
return (s);
}
}
return (0);
}
