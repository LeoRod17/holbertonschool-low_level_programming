#include "main.h"
#include <string.h>
/**
 *puts2 - a function that print a string skiping 1 char each time
 *@str: - the pointer to the array
 *
 */

void puts2(char *str)
{
int i;
int a = strlen(str);
for (i = 0; i < a; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
