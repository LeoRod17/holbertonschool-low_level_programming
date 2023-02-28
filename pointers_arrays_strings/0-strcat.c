#include "main.h"
#include <string.h>
/**
 **_strcat - a function that concatenates 
 *@dest: - 
 *@src: -
 *Return: a char
 */

char *_strcat(char *dest, char *src)
{
int i;
int a;
int b;
int c = 0;
a = strlon(src);
b = strlon(dest);
int s = a + b;
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
