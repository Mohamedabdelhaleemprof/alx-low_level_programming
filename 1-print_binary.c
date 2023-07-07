#include "main.h"
/**
 * ham - ham
 * @toe: toe
 * @nail: nail
 * Return: nail
 */
unsigned long int ham(unsigned int toe, unsigned int nail)
{
unsigned long int a;
unsigned int b;
a = 1;
for (b = 1; b <= nail; b++)
a *= toe;
return (a);
}
/**
 * print_binary - print
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int c, d;
char e;
e = 0;
c = ham(2, sizeof(unsigned long int) * 8 - 1);
while (c != 0)
{
d = n & c;
if (d == c)
{
e = 1;
_putchar('1');
}
else if (e == 1 || c == 1)
{
_putchar('0');
}
c >>= 1;
}
}
