#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
  printf("%c is positive\n", n);
}
if(n<0)
{
  printf("%c is negative\n", n);
}
 else
{
  printf("%c is zero\n", n);
}
return (0);
}
