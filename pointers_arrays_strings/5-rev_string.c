#include "main.h"
#include <string.h>
/**
 *rev_string - a string that prints reverse
 *@s: - the string to receive
 *
 */

void rev_string(char *s)
{
int a;
int b;
int c = 0;
int i;
char r[1000];
a = strlen(s);
for (b = a - 1; b >= 0; b--)
{
r[c] = s[b];
c++;
}
for (i = 0; i <= a; i++)
{
s[i] = r[i];
}
}
