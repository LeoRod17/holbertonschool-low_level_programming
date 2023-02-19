#include "main.h"

/**
 *print_last_digit - this prints the las digit of a number
 *@num: - the number which I would get the last digit
 *Return: 0
 */

int print_last_digit(int num)
{
int last;
last = num % 10;
_putchar(last);
return (last);
}
