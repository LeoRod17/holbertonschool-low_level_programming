#include "main.h"
/**
 *void print_numbers(void) - a this function prints thr number 0 and 9
 *
 *Return: 0
 */

void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if(i == 49)
{
i = 57;
}
_putchar(i);
}
_putchar('\n');
}
