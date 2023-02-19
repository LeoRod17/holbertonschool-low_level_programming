#include <stdio.h>

void PrintPut(void){
int i;
for (i = 95; i != 115; i++)
{
putchar(i);
if (i == 95)
{
i = 111;
}
if (i == 112)
{
i = 116;
}
if (i == 117)
{
i = 115;
}
if (i == 116)
{
i = 98;
}
if (i == 99)
{
i = 103;
}
if (i == 104)
{
i = 96;
}
if (i == 97)
{
i = 113;
}
}
putchar('\n');
}
