#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - this prints the las digit of a number
 *@num: - the number which I would get the last digit
 *Return: 0
 */

int print_last_digit(int num)
{
int last;
int a;
a = abs(num);
last = a % 10;
putchar(last + 48);
return (last);

}
