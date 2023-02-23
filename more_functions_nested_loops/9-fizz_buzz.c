#include "main.h"

/**
 *main - entry point
 *
 *Return: 0
 */

int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
putchar(' ');
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
return (0);
}
