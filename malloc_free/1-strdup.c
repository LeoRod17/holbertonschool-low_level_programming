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
if (str == NULL)
{
return (NULL);
}
s = strlen(str);
p = malloc(sizeof(char) * (s + 1));
if (p == NULL)
{
exit(1);
}
for (i = 0; i < s; i++)
{
p[i] = str[i];
}
return (p);
}
