#include "main.h"
#include <string.h>
/**
 **str_concat - a function to concatenate two strings
 *@s1: the first string
 *@s2: the second string
 *Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
int i;
int a;
int b;
int c;
int f;
char *point1;
if (s1 == NULL)
{
return (NULL);
}
if (s2 == NULL)
{
return (NULL);    
}
a = strlen(s1);
b = strlen(s2);
c = a + b;
point1 = malloc(sizeof(char) * (c + 1));
if (point1 == NULL)
{
exit(1);
}
f = 0;
for (i = 0; i < a; i++)
{
point1[i] = s1[i];
}
for (; i < c; i++)
{
point1[i] = s2[f];
f++;
}
return (point1);
}
