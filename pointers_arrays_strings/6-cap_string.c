#include "main.h"
#include <string.h>
/**
 **cap_string - a function that change the letter to a capital letter
 *
 *
 */
char *cap_string(char *s)
{
int n;
int i;
int a;
int b;
int c;
char arr[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
a = strlen(s);
for (i = 0; i < a; i++)
{
n = i - 1;
for(c = 0; c < 9; c++)
{
if(n == arr[c])
{
b = s[i];
b = b - 32;
s[i] = b;
}
}
}
return (s);
}
