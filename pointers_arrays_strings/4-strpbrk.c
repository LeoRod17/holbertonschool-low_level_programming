#include "main.h"
#include <string.h>
/**
 **_strpbrk - a function that returns the bytes of the times the array is in the array
 *@s: - the pointer of the array to look
 *@accept: - the pointer to the array that looks
 *return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int a;
int b;
int c;
int d = 0;
char r[1000];
a = strlen(s);
b = strlen(accept);
for (i = 0; i < a; i++)
{
for (c = 0; c < b; c++)
{
if(s[i] == accept[c])
{
for (; i < a; i++)
{
while (c < b)
{
r[d] = s[i];
c++;
d++;
}
}
s = r;
}
}
return (s);
}
}
