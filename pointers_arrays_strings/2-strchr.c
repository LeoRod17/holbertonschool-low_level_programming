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
a = strlen(s);
char p[100];
int b;
 
if (c == 0)
{
  return (0);
}
for (i = 0; i < a; i++)
{
if (s[i] == c)
{
for (; i < a; i++)
{
p[b] = s[i];
b++;
}
s = p;
return (s);
}
}
}
