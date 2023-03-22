#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 *
 */

void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
for (i = n; i < 99; i++)
{
if (i != 98)
printf("%d, \n", i);
else if (i == 98)
printf("%d, \n", i);
}
}

else if (n > 98)
{
for (j = n; j <112; j++)
{
if (j != 98)
printf("%d, \n", j);
else if (j ==98)
printf("%d, \n", j);
}
}
}

