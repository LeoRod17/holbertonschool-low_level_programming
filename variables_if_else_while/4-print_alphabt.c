#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if(i == 65 || i == 71)
{
i++;
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
