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
a = strlen(format);
if (a < 10 && a > 0)
{
va_start(l, format);
i = 0;
while (i < a)
{
switch (format[i])
{
case 'c':
c = va_arg(l, int);
printf("%c, ", c);
break;
case 'i':
printf("%d, ", va_arg(l, int));
break;
case 'f':
printf("%f, ", va_arg(l, double));
break;
case 's':
res = va_arg(l, char *);
if (res == NULL)
res = "(nil)";
printf("%s, ", res);
break;
default:
break;
}
i++;
}
printf("\n");
}
}
