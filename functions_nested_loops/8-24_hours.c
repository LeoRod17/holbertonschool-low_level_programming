#include "main.h"
/**
 *jack_bauer - this function prints every minute and hour of the day
 *
 *Return: 0
 */

void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;
for (h1 = 48; h1 < 51; h1++)
{
for (h2 = 48; h2 < 58; h2++)
{
for (m1 = 48; m1 < 54; m1++)
{
for (m2 = 48; m2 < 58; m2++)
{
putchar(h1);
putchar(h2);
putchar(':');
putchar(m1);
putchar(m2);
putchar('\n');
 if (h1 == 50 && h2 == 51 && m1 == 57 && m2 == 57)
{
h1 = 60;
h2 = 60;
m1 = 60;
m2 = 60;
}
}
}
}
}
}
