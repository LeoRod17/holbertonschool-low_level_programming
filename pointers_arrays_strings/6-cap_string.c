#include "main.h"
#include <string.h>
/**
 **cap_string - a function that change the letter to a capital letter
 *@s: - the pointer to the array
 *Return: a char
 */
char *cap_string(char *s)
{
int n;
int i;
int a;
int b;
int c;
char arr[] = {',',';','.','!','?','"','(', ')','{','}',' ','\t','\n'};
a = strlen(s);
for (i = 0; i < a; i++)
{
if (i == 0 && s[i] > 97 && s[i] <123)
{
b = s[i];
b = b - 32;
s[i] = b;
}
n = i - 1;
for (c = 0; c < 12; c++)
{
if (s[n] == arr[c])
{
b = s[i];
b = b - 32;
s[i] = b;
}
}
}
return (s);
}
