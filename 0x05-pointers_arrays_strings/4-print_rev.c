#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 *
 * @s: char variable
 *
 */

void print_rev(char *s)
{
	int l = 0;
	int o;

while (*s != '\0')
{
s++;
l++;
}
s--;
for (o = l; o > 0; o--)
{
_putchar(*s);
s--;
}
}
