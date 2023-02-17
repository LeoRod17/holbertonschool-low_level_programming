#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int i;
int c = 44;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i < 57)
{
putchar(c);
putchar(' ');
}
}
putchar('\n');
return (0);
}
