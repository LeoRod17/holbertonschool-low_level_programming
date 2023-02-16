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
	    printf("%i", n, "%c", "is positive\n");
	  }
	else
	  {
	    printf("%i", n, "%c", "is negative\n");
	  }
	return (0);
}
