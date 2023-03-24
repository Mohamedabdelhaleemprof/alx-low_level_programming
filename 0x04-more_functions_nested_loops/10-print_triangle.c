#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * description: print the size .
 *
 * @size: input of numbers to be printed
 *
 * Return: Always 0(Success)
 */

void print_triangle(int size)
{
int i, j, k, spc = size - 1;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (k = spc; k > 0; k--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
spc--;
}
}
else
{
_putchar('\n');
}
}

