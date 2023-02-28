#include "main.h"
#include <string.h>
/**
 **_strcat - a function that concatenates 
 *@dest: - the second string
 *@src: - the first string
 *Return: the combined string of dest and src
 */

char *_strcat(char *dest, char *src)
{
int i;
int a;
int b;
int s;
int c = 0;
a = strlen(src);
b = strlen(dest);
s = a + b;
for (i = 0; i < s; i++)
{
if (i > b)
{
dest[i] = src[c];
c++;
}
}
return dest;
}
