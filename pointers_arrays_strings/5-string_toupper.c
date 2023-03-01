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
a = strlen(s);
for (i = 0; i < a; i++)
{
  if(s[i] > 97)
    {
      s[i] + 20;
    }
}
return s;
}
