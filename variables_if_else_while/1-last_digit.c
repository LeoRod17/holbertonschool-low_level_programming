#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int n;
int Ln;
srand(time(0));
n = rand() - RAND_MAX / 2;
Ln = n % 10;
if (Ln > 5)
{
printf("Last digit of %d is", n);
printf(" %d and is greater than 5\n", Ln);
}
if (Ln < 6 && Ln > 0)
{
printf("Last digit of %d is", n);
printf(" %d and is less than 6 and not 0 \n", Ln);
}
if (Ln == 0)
{
printf("Last digit of %d is ", n);
printf("%d and is 0\n", Ln);
}
return (0);
}
