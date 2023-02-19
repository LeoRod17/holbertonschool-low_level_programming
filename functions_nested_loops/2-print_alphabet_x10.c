#include "main.h"
/**
 *print_alphabet_x10 - Functionto print X10 the alphabet
 *
 *Return: 0
 */

void print_alphabet_x10(void){  
int c;
int a;
for (c = 0; c < 9; c++)
{
for(a = 97; a < 123; a++)
{
putchar(a);
}
}
putchar('\n');
}
