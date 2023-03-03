#include "main.h"
#include <string.h>
/**
 **_strpbrk - a function that returns the array from thea certain point
 *@s: - the pointer of the array to look
 *@accept: - the pointer to the array that looks
 *return: - a pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int a;
int b;
int c;
a = strlen(s);
b = strlen(accept);
for (i = 0; i < a; i++)
{
for (c = 0; c < b; c++)
{
if (s[i] == accept[c])
{
return (s + i);
}
}
}
return (0);
}
