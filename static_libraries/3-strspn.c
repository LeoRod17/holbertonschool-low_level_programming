#include "main.h"
#include <string.h>
/**
 *_strspn - a function that gets the lenght of a prefix substring
 *@s: - the string to look in
 *@accept: - the return with the bytes
 *Return: a pointer
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int a;
int b;
int c;
int bit = 0;
unsigned int d = 0;
a = strlen(s);
b = strlen(accept);
for (i = 0; i < a; i++)
{
for (c = 0; c < b; c++)
{
if (s[i] == accept[c])
{
d++;
bit = 0;
break;
}
else
{
bit = 1;
}
}
if (bit == 1)
{
return (d);
}
}
return (d);
}
