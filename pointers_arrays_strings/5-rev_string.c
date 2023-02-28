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
int c=0;
int i;
a = strlen(s);
char rev[1000];
for (b = a - 1; b >= 0; b--)
{
rev[c] = s[b];
c++;
}
for (i = 0; i <= a; i++)
{
s[i] = rev[i];
}
}
