#include "main.h"

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
unsigned int d;
a = strlen(s);
b = strlen(accept);
for (i = 0; i < a; i++)
{
for (c = 0; c < b; c++)
{
if (s[i] == accept[c])
{
d++;
}
}
}
return (d);
}
