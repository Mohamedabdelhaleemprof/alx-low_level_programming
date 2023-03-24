#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: number of _ to be printed
 */

void print_line(int n)
{
int r;

if (n <= 0)
_putchar('\n');
else
{
for (r = 1; r <= n; r++)
_putchar('_');
_putchar('\n');
}
}
