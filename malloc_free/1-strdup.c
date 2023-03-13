#include "main.h"
#include <string.h>
/**
 **_strdup - a function to imitate the strdup function
 *@str: - an array
 *Return: a pointer
 */
char *_strdup(char *str)
{
int i;
int s;
char *p;
s = strlen(str);
if (s == 0)
{
return (NULL);
}
p = malloc(sizeof(char) * s);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < s; i++)
{
p[i] = str[i];
}
return (p);
}
