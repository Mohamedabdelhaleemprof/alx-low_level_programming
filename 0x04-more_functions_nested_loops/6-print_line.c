#include "main.h"

/**
 * print_line - draw line
 *
 * @n: number of ( _ ) to be printed
 */

void print_line(int n)
{
int x;

if (n =< 0)
_putchar('\n')
else 
{
for (x = 1; x <= n; x++)
_putchar('_')
_putchar('\n')
}
}
