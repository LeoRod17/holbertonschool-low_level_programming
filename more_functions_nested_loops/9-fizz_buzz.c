#include "main.h"

/**
 *main - entry point
 *
 *Return: 0
 */

int main(void)
{
int i;
for (i = 0; i < 99; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
_putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
_putchar(' ');
}
else if (i % 3 == 0 && i % 5 == 0)
}
printf("FizzBuzz");
_putchar(' ');
}
else
{
printf("%d", i);
_putchar(' ');
}
}
}
