#include "main.h"
#include <string.h>

/**
 **string_toupper - a function that changed the lower cas to uppercase
 *@s: - the pointer to the string 
 *
 */

char *string_toupper(char *s)
{
int i;
int a;
int b;
a = strlen(s);
for (i = 0; i < a; i++)
{
if(s[i] > 96 && s[i] < 123)
{
b = s[i];
b - 32;
s[i] = b;
}
}
return s;
}
