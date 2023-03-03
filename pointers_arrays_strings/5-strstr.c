#include "main.h"
#include <string.h>
/**
 **_strstr - a function that prints after the located array
 *@haystack: - the string to try looking for
 *@needle: - the pointer
 *Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int a;
int b;
int c;
int bit = 0;
int d;
char *p;
a = strlen(haystack);
b = strlen(needle);
for (i = 0; i < a; i++)
{
d = 0;
c = i;
if (haystack[i] == needle[d] && bit == 0)
{
for (d = 0; d < b; d++)
{
if (haystack[c] != needle[d])
{
break;
}
c++;
if (d == b - 1)
{
p = &haystack[i];
bit = 1;
}
}
}
}
if(p == 0)
{
return (haystack);
}
else
{
return (p);
}
}
