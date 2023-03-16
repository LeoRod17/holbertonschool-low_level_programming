#include "main.h"

/**
 **string_nconcat - a function to concatenate two strings
 *@s1: - first string
 *@s2: - second string
 *@n: - how much of the second array will i print
 *Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int a;
unsigned int b;
unsigned int j;
char *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
a = strlen(s1);
b = strlen(s2);
if (n > b)
{
n = b;
}
 p = malloc(sizeof(char) * (a + n) + 1);
if (p == NULL)
{
exit(1);
}
for (i = 0; i < a; i++)
{
p[i] = s1[i];
}
for (j = 0; j < n; j++)
{
p[i] = s2[j];
i++;
}
return (p);
}
