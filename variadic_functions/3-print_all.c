#include "variadic_functions.h"
#include <string.h>
/**
 *print_all - a function that print everything
 *@format: - the format
 *
 *Return: 0
 */
void print_all(const char * const format, ...)
{
int i;
int a;
va_list l;
char *res;
char c;
int b;
a = strlen(format);
va_start(l, format);
i = 0;
while (i < a)
{
b = 0;
switch (format[i])
{
case 'c':
c = va_arg(l, int);
printf("%c", c);
b = 1;
break;
case 'i':
printf("%d", va_arg(l, int));
b = 1;
break;
case 'f':
printf("%f", va_arg(l, double));
b = 1;
break;
case 's':
res = va_arg(l, char *);
if (res == NULL)
res = "(nil)";
printf("%s", res);
b = 1;
break;
}
if (i != a - 1 && b == 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
