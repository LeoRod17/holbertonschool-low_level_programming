#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - Function that prints the alphabet
 *
 *Return: 0
 */
void print_alphabet(void)
{
int a;
for (a = 97; a < 123; a++)
{
putchar(a);
}
putchar('\n');
}
