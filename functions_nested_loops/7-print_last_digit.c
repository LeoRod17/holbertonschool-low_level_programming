#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - this prints the las digit of a number
 *@num: - the number which I would get the last digit
 *Return: 0
 */

int print_last_digit(int num)
{
if(num < 0)
{
int a;
a = abs(num);
_putchar(a % 10);
return (last);
}
else
{
_putchar(num % 10);
return (last);
}
}
